#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: binary_tree_t (newnode)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	new_child = malloc(sizeof(binary_tree_t));
	if (new_child == NULL)
		return (NULL);

	new_child->parent = parent;
	new_child->n = value;
	new_child->left = NULL;
	new_child->right = NULL;

	return (new_child);
}
