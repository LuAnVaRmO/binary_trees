#include "binary_trees.h"
/**
 * binary_tree_node - Create a new node
 * @parent: Parent node
 * @value: value to add to node
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new_bt;

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
	return (new_bt);
}
