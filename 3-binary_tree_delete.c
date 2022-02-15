#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
     binary_tree_t *leaf_parent;

     while (tree != NULL)
     {
         if (tree->left != NULL)
                tree = tree->left;
        else if (tree->right != NULL)
                tree = tree->right;
        else
        {
            leaf_parent = tree->parent;
            free(tree);
            tree = leaf_parent;
        }
     }
}