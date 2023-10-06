#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the tree
 * @tree:pointer to the root node of the tree
 * This is Mimi's Binary Project alx
 *
 * Return: 0 if tree is NULL else the size
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t hl, hr;

if (tree == NULL)
return (0);
hl = binary_tree_size(tree->l);
hr = binary_tree_size(tree->r);

return (hr + 1 + hl);

}
