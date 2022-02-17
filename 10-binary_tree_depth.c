#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a node in a binary tree.
* @tree: Pointer to the node to measure the depth.
*
* Return: If tree is NULL - 0. Otherwise - depth of the node.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	while (tree->parent !=  NULL)
	{
		tree = tree->parent;
		count++;
	}

	return (count);
}
