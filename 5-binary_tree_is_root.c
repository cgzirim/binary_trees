#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks is a given node is root.
 * @node: Pointer to the node to check.
 *
 * Return: If node is a root - 1
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node->parent == NULL)
        return (1);

    return (0);
}