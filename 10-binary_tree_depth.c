#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of a node
 * @tree: root node
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		d = 1 + binary_tree_depth(tree->parent);
	return (d);
}
