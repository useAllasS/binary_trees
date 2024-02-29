#include "binary_trees.h"

/**
 *binary_tree_depth - To measures depth of node in binary tree
 *@tree: Ptr to node to measure
 *
 * Return: 0 -> tree is NULL
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
