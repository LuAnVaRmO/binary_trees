#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if the node is root
 * @node: Node
 * Return: Return 1 if root, 0 if do not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
