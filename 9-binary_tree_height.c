#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a tree
 * @tree: root node
 * Return: height of node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l = 0;
	size_t h_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		h_l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		h_r = 1 + binary_tree_height(tree->right);
	if (h_l > h_r)
		return (h_l);
	else
		return (h_r);
}
