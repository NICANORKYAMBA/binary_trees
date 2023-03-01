#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: pointer to the node to find the uncle of
 *
 * Return: pointer to the uncle node, or NULL if no uncle or node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	 binary_tree_t *grandparent, *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	grandparent = node->parent->parent;

	uncle = (node->parent == grandparent->left)
		? grandparent->right : grandparent->left;

	return (uncle);
}
