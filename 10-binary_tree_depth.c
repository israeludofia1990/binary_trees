#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 *                     in a tree
 * @tree: the pointer to the node to measure the depth
 * Return: if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t depth_left = binary_tree_depth(tree->left);
	size_t depth_right = binary_tree_depth(tree->right);

	if (depth_left > depth_right)
		return (depth_left + 1);
	else
		return (depth_right + 1);
}
