#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert in the left child of tree
 * @parent: tree node
 * This is Mimi's Binary tree project
 *
 * @value: value to insert
 * Return: beats or NULL on fail
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *beats;

	if (parent == NULL)
		return (NULL);
	beats = binary_tree_node(parent, value);
	if (beats == NULL)
		return (NULL);
	beats->left = parent->left;
	if (beats->left != NULL)
	{
		beats->left->parent = beats;
	}
	parent->left = beats;
	return (beats);
}
