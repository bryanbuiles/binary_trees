#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a binary tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *root_node = NULL;

    root_node = malloc(sizeof(binary_tree_t));
    if (!root_node)
        return NULL;

    root_node->n = value;
    root_node->left = NULL;
    root_node->right = NULL;
    root_node->parent = parent;

    return (root_node);
}
