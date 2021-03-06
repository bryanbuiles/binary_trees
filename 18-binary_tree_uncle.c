#include "binary_trees.h"

/**
 * binary_tree_uncle - check if the node has an uncle
 * @node: is a pointer to the root node of the tree
 * Return: int
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
