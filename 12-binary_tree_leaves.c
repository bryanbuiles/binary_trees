#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: is a pointer to the root of the tree
 * Return: size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	right = binary_tree_leaves(tree->right);
	left = binary_tree_leaves(tree->left);

	return (left + right);
}
