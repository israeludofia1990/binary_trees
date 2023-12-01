#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: is the pointer to the root nod of the tree to delete
 *        if tree is NULL do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left == NULL || tree->right == NULL)
	{
		free(tree);
	}
}
