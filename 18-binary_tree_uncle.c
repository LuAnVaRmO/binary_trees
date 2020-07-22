#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to check
 * Return: the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent)
	{
		if (node->parent->left != node)
			return (node->parent->left);
		else if (node->parent->right != node)
			return (node->parent->right);
	}
	return (NULL);
}
/**
 * binary_tree_uncle - Find uncle of a node
 * @node: pointer to node to find uncle
 * Return: Uncle of 'nil' if Null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent || !node->parent->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
