#include "binary_trees.h"

/**
* binary_tree_inorder - Goes through a binary tree using in-order traversal.
* @tree: Pointer to the root of the node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*        The value in the node must be passed as a parameter to this function.
*
* Note: The function would not run if tree or func is NULL.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
