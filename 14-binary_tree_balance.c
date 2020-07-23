#include "binary_trees.h"

/**
 * binary_tree_balance- measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: int
 */

size_t binary_tree_height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, rigth = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left) + 1;
	rigth = binary_tree_height(tree->right) + 1;

	if (rigth > left)
		return (rigth);
	else
		return (left);
	return (0);
}
