#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree
 * Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) ==
		binary_tree_height(tree->right))
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height- measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: size_t
 */

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
