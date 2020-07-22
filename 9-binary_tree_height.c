#include "binary_trees.h"

/**
 * binary_tree_height- measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, rigth = 0;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	rigth = binary_tree_height(tree->left);
	left = binary_tree_height(tree->right);

	if (rigth > left)
		return (rigth + 1);
	else
		return (left + 1);
}
