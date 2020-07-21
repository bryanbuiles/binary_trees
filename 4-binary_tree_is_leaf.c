#include "binary_trees.h"

/**
 * binary_tree_is_leaf - creates a binary tree node
 * @node: is a pointer to cheak if is a leaf
 * Return: 0 in fail 1 in succes
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
