#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node.
* @node: Pointer to the node to find the uncle.
* Return: If node, parent is NULL or node has no ucle - NULL
*         Otherwise: Pointer to the node's uncle.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (binary_tree_sibling(node->parent));
}

/**
* binary_tree_sibling - Finds the sibling of a node.
* @node: Pointer to the node to find the sibling.
* Return: If node, parent is NULL or node has no sibling - NULL
*         Otherwise: Pointer to the node's sibling.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->left && !node->parent->right)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);

	return (NULL);
}
