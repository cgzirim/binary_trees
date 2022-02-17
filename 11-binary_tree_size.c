#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the size of a binary tree.
 * @tree: Pointer to the root node to the tree to measure.
 * Return: If tree is NULL - 0
 *         Otherwise - size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t r = 0;
    size_t l = 0;

    if (tree == NULL)
        return (0);

    l = binary_tree_size(tree->left);
    r = binary_tree_size(tree->right);

    return (l + r + 1);
}