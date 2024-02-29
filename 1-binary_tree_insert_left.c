#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left-child
 *@parent: ptr to node to insert left-child in
 *@value: value to store in new node
 * Return: ptr to created node, or NULL -> failure or if parent ->NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = NULL;

	if (parent == NULL)
		return (NULL);
	nd = malloc(sizeof(binary_tree_t));
	if (nd == NULL)
		return (NULL);
	nd->n = value;
	nd->parent = parent;
	nd->left = NULL;
	nd->right = NULL;
	if (parent->left == NULL)
		parent->left = nd;
	else
	{
		nd->left = parent->left;
		parent->left = nd;
		nd->left->parent = nd;
	}
	return (nd);
}
