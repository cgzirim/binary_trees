#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checkd if a node is a leaf.
 * @node: Pointer to the node to check.
 * 
 * Return: If node is a leaf - 1
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node->left && !node->right)
        return (1);

    return (0);
}