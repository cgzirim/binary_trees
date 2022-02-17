#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree.
* @tree: Pointer to the root node to the tree to count the number of leafs.
*
* Return: If tree is NULL - 0. Otherwise - size of the tree.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t r = 0;
	size_t l = 0;

	if (tree == NULL)
	return (0);
	if (!tree->left && !tree->right)
	return (1);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return (l + r);
}
