#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a binary tree node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

    if (!parent)
        return NULL;
    new_node = binary_tree_node(parent, value);

    if (parent->right != NULL)
    {
        parent->right->parent = new_node;
        new_node->right = parent->right;
    }
    parent->right = new_node;
    return (new_node);
}
