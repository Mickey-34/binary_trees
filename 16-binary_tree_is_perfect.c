#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node leaf or not
 * @node: node to check
 * This is Mimi's Binary project
 *
 * Return: 1 if node if leaf 0 if not
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height - measures the hight of the tree
 * @tree:pointer to the root node of the tree
 * This is Mimi's Binary Project alx
 *
 * Return: 0 if tree is NULL else the hight
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (h_right <= h_left)
		return (h_left + 1);

	return (h_right + 1);

}

/**
 * binary_tree_is_perfect - if tree is balanced in the right and left
 * then its perfect
 * @tree:node of tree
 * This is Mimi's Alx Binary Project
 *
 * Return: 1 if perfect 0 if not
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	size_t a_f, a_l;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);
	if (left == NULL || right == NULL)
		return (0);
	a_f = binary_tree_height(right);
	a_l = binary_tree_height(left);
	if (a_f == a_l)
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);

}
