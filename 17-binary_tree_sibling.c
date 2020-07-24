#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_sibling - check if a binary tree is perfect
 * @node: is a pointer to the root node of the tree
 * Return: int
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if ((node->parent->right != NULL) && (node->parent->left != NULL))
	{
		if (node->parent->right->n != node->n)
			return (node->parent->right);
		else if (node->parent->left->n != node->n)
			return (node->parent->left);
	}
	return (NULL);
}
