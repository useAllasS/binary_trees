#include "binary_trees.h"

/**
 * binary_tree_size - To measure size of  binary tree
 *@tree: ptr to root node of tree to measure size
 * Return: 0 -> tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t nd_lft, nd_rght;

		nd_lft = binary_tree_size(tree->left);
		nd_rght = binary_tree_size(tree->right);
		return (1 + nd_lft + nd_rght);
	}
}
