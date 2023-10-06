#include "binary_trees.h"

/**
 * binary_tree_height_1 - measures the hight of the tree
 * @tree:pointer to the root node of the tree
 * This is Mimi's Alx Binary project
 *
 * Return: 0 if tree is NULL else the hight
 *
 */
int binary_tree_height_1(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);
	h_left = binary_tree_height_1(tree->left);
	h_right = binary_tree_height_1(tree->right);
	if (h_left >= h_right)
		return (h_left + 1);

	return (h_right + 1);

}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * This is Mimi's Alx Binary Project
 *
 * Return: 0 or balance factor
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_height_1(tree->l);
	r = binary_tree_height_1(tree->r);
	return (l - r);
}
