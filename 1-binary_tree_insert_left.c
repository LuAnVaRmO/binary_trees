#include "binary_trees.h"
/**
 * binary_tree_insert_left - Functions to add node to left child
 * @parent: Parent node
 * @value: value to add to node
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new_bt;

	if (parent == NULL)
		return (NULL);

	new_bt = malloc(sizeof(binary_tree_t));
	if (!new_bt)
	{
		free(new_bt);
		return (NULL);
	}
	new_bt->parent = parent;
	new_bt->n = value;
	new_bt->left = NULL;
	new_bt->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_bt;
	}
	else
	{
		new_bt->left = parent->left;
		parent->left->parent = new_bt;
		parent->left = new_bt;
	}
	return (new_bt);
}
