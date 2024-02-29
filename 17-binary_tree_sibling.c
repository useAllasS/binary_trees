#include "binary_trees.h"

/**
 * binary_tree_sibling - To find sibling of node
 *@node: ptr to node to find sibling
 * Return: ptr to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);

}
