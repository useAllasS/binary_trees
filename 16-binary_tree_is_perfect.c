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
/**
 * binary_tree_size - To measure size of binary tree
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
/**
 * binary_tree_is_perfect - To check if binary tree is perfect
 *@tree: ptr to root node of tree to check
 * Return: 0 -> tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t n = 0, prfct_sz = 0;

	if (tree == NULL)
		return (0);
	n = binary_tree_height(tree);
	prfct_sz = (1 << (n + 1)) - 1;
	if (prfct_sz == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
