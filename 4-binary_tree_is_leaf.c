#include "binary_trees.h"


/**
 * binary_tree_is_leaf - To check if node is leaf
 * @node: Ptr to node to check
 * Return: 1 -> node is leaf
 * Otherwise - return -> 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
