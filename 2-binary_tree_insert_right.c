#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert in the right child of tree
 * @parent: tree node
 * This is Mimi's Binary project
 *
 * @value: value to insert
 * Return: new node or NULL on fail
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *beats;

	if (parent == NULL)
		return (NULL);
	beats = binary_tree_node(parent, value);
	if (beats == NULL)
		return (NULL);
	beats->right = parent->right;
	if (beats->right != NULL)
	{
		beats->right->parent = beats;
	}
	parent->right = beats;
	return (beats);
}
