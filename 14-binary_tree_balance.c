#include "binary_trees.h"

/**
 * binary_tree_balance- measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: int
 */

size_t binary_tree_height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, rigth;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	rigth = binary_tree_height(tree->right);
	return (left - rigth);
}

/**
 * binary_tree_height- measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, rigth;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	rigth = binary_tree_height(tree->right) + 1;

	if (rigth >= left)
		return (rigth);
	else
		return (left);
}
