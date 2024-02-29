#include "binary_trees.h"

/**
 * binary_tree_is_root - To check if given node is root
 *@node: ptr to node to check
 * Return: 1 -> node is root, otherwise -> 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
