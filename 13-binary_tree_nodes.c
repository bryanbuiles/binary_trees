#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the leaves of a binary tree
 * @tree: is a pointer to the root of the tree
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	right = binary_tree_nodes(tree->right);
	left = binary_tree_nodes(tree->left);

	return (left + right + 1);
}
