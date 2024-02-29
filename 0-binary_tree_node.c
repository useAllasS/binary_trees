#include "binary_trees.h"

/**
 * binary_tree_node - fnct to creates binary tree node
 *@parent: ptr to parent node of node to create
 *@value: value to put in new node
 * Return: ptr to new node or NULL -> no.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = malloc(sizeof(binary_tree_t));

	if (nd == NULL)
		return (NULL);
	nd->n = value;
	nd->parent = parent;
	nd->left = NULL;
	nd->right = NULL;
	return (nd);
}
