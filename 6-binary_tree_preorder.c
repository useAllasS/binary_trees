#include "binary_trees.h"

/**
 * binary_tree_preorder - goes thrgh binary tree using the pre-order traversal
 *@tree: ptr to root node of tree to traverse
 *@func: ptr to function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
