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