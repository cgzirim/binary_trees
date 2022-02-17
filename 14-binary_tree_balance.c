#include "binary_trees.h"

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: Pointer to the root node to the tree to measure.
* Return: If tree is NULL - 0
*         Otherwise - balance factor of the tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_subtree = 0;
	int r_subtree = 0;

	if (tree == NULL)
	return (0);

	l_subtree = binary_tree_height(tree->left);
	r_subtree = binary_tree_height(tree->right);

	return (l_subtree - r_subtree);
}
