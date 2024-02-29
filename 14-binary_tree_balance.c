#include "binary_trees.h"
/**
 * binary_tree_height - To measure height of binary tree
 *@tree: ptr to root node of tree to measure height
 * Return: 0 -> tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int lft = 1, rght = 1;

		if (tree->right)
			rght +=  binary_tree_height(tree->right);
		if (tree->left)
			lft +=  binary_tree_height(tree->left);
		if (lft > rght)
			return (lft);
		else
			return (rght);
	}
	else
		return (0);
}
/**
 * binary_tree_balance - To measure balance factor of binary tree
 *@tree: ptr to root node of tree to measure balance factor
 * Return: 0 -> tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
