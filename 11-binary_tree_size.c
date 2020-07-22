#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root of the tree
 * Return: size_t
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);
	return (right + left + 1);
}
