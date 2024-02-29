#include "binary_trees.h"

/**
 * binary_tree_delete - To delete entire binary tree
 *@tree: ptr to root node of tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}

