#include "binary_trees.h"

/**
 * binary_tree_uncle - check if the node has an uncle
 * @node: is a pointer to the root node of the tree
 * Return: int
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL ||
		node->parent == NULL)
		return (NULL);

	if ((node->parent->parent->right != NULL) &&
		(node->parent->parent->left != NULL))
	{
		if (node->parent->parent->right->n != node->parent->n)
			return (node->parent->parent->right);
		else if (node->parent->parent->left->n != node->parent->n)
			return (node->parent->parent->left);
	}
	return (NULL);
}
