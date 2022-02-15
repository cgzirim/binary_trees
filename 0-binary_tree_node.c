#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Root of the binary tree.
 * @value: The binary tree's data.
 *
 * Return: On success - pointer to the binary tree
 * 	   Otherwise - NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_b_t;

	new_b_t = malloc(sizeof(binary_tree_t));
	if (!new_b_t)
		return (NULL);

	new_b_t->n = value;
	new_b_t->parent = parent;
	new_b_t->left = NULL;
	new_b_t->right = NULL;

	return (new_b_t);
}
