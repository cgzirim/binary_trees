#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: Pointer to the root node of the tree to check.
* Return: If tree is NULL or isn't perfect - 0
*         Otherwise - 1.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_subtree = 0;
	int r_subtree = 0;

	if (tree == NULL)
		return (0);

	/* Return depth of tree if it's a leaf.*/
	if (!tree->left && !tree->right)
		return (binary_tree_depth(tree));

	l_subtree = binary_tree_is_perfect(tree->left);
	r_subtree = binary_tree_is_perfect(tree->right);

	/*
	 * l_subtree + r_subtree has to be > 0. Otherwise
	 * the tree isn't perfect.
	 */
	if ((l_subtree == r_subtree) && (l_subtree + r_subtree) > 0)
	return (1);

	return (0);
}

/**
* binary_tree_depth - Measures the depth of a node in a binary tree.
* @tree: Pointer to the node to measure the depth.
*
* Return: If tree is NULL - 0. Otherwise - depth of the node.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		while (tree->parent !=  NULL)
		{
			tree = tree->parent;
			count++;
		}
	}

	return (count);
}
