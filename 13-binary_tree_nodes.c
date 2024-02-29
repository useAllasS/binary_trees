#include "binary_trees.h"

/**
 * binary_tree_nodes - To counts nodes with at 1 child at least in binary tree
 * @tree: ptr to root node of tree to count nbr of nodes
 *
 * Return: 0 -> tree is NULL, else -> node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nds = 0;

	if (tree)
	{
		nds += (tree->left || tree->right) ? 1 : 0;
		nds += binary_tree_nodes(tree->left);
		nds += binary_tree_nodes(tree->right);
	}
	return (nds);
}
