#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 *                           of another node
 * @parent: is a pointer to the node to instert the left-chide in
 * @value: is the value to store in the new node
 * Return: a pointer NULL or failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (parent == NULL)
		return (NULL);

	new_child = malloc(sizeof(binary_tree_t));

	if (new_child == NULL)
		return (NULL);

	new_child->parent = parent;
	new_child->n = value;
	new_child->left = NULL;
	new_child->right = NULL;

	if (parent->left != NULL)
	{
		new_child->left = parent->left;
		parent->left->parent = new_child;
	}

	parent->left = new_child;

	return (new_child);
}
