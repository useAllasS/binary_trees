#include "binary_trees.h"

/**
 * binary_tree_height - To measures height of binary tree
 *@tree: ptr to root node of tree to measure height
 * Return: if tree is NULL return -> 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int lft = 0, rght = 0;

		if (tree->right)
			rght = 1 + binary_tree_height(tree->right);
		if (tree->left)
			lft = 1 + binary_tree_height(tree->left);
		if (lft > rght)
			return (lft);
		else
			return (rght);
	}
	else
		return (0);
}
