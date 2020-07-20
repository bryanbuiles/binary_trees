#include "binary_trees.h"

/**
 * binary_tree_delete - creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a binary tree node
 */

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree)
    {
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
    }
}
