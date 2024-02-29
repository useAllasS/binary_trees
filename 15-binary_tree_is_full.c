#include "binary_trees.h"

/**
 * binary_tree_is_full - To checks if binary tree is full
 *@tree: ptr to root node of tree to check
 * Return: 0 -> tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
