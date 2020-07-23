#include "binary_trees.h"

/**
 * binary_tree_balance- measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int sumleft = 0, sumright = 0;

	if (!tree)
		return (0);

	sumleft = binary_tree_balance(tree->left);
	if (tree->left == NULL)
		sumleft--;
	sumright = binary_tree_balance(tree->right);
	if (tree->right == NULL)
		sumright--;

	return (sumleft - sumright);
}
