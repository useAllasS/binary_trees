#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node right-child of another node
 *@parent: ptr to node to insertright-child in
 *@value: value to store in new node
 * Return: ptr to created node, or NULL -> failure or -> no.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right == NULL)
		parent->right = nd;
	else
	{
		nd->right = parent->right;
		parent->right = nd;
		nd->right->parent = nd;
	}
	return (nd);
}
