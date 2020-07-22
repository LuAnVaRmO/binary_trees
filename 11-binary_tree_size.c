#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a tree
 * @tree: root node
 * Return: size of node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		s += binary_tree_size(tree->left);
	if (tree->right)
		s += binary_tree_size(tree->right);
	return (s);
}
