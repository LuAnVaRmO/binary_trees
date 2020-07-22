#include "binary_trees.h"
/**
 * binary_tree_is_full - Check if tree is full
 * @tree: Tree to check
 * Return: 1 if full, 0 if don't
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
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
/**
 * binary_tree_is_perfect - check if a tree is perfect
 * @tree: tree to check
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t s_l = 0, s_r = 0;

	if (!tree)
		return (0);
	s_l = binary_tree_size(tree->left);
	s_r = binary_tree_size(tree->right);
	if (binary_tree_is_full(tree) && s_l == s_r)
		return (1);
	return (0);
}
