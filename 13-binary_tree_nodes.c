#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node leaf or not
 * @node: node to check
 * This is Mimi's Binary project alx
 *
 * Return: 1 if node if leaf 0 if not
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->l == NULL && node->r == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - count nodes with at least 1 child in a binary tree
 * @tree: node again to check
 * Mimi's Binary Alx project
 *
 * Return: size of nodes with at least 1 child
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
		return (0);

	hl = binary_tree_nodes(tree->l);
	hr = binary_tree_nodes(tree->r);

	return (hr + hl + 1);
}
