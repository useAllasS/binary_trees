#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  To perform left-rotation on binary tree
 * @tree: ptr to binare_tree_t
 * Return: ptr to new root node of tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *ax, *tmpr;

	if (tree == NULL)
		return (NULL);
	if (tree->right)
	{
		tmpr = tree->right->left;
		ax = tree->right;
		ax->parent = tree->parent;
		ax->left = tree;
		tree->parent = ax;
		tree->right = tmpr;
		if (tmpr)
			tmpr->parent = tree;
		return (ax);
	}
	return (NULL);
}
