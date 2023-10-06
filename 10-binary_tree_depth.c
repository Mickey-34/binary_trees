#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of the tree
 * @tree:pointer to the root node of the tree
 * This is Mimi's Binary project alx
 *
 * Return: 0 if tree is NULL else the depth
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t mimi = 0;

if (tree == NULL)
return (0);
while (tree->parent)
{
mimi++;
tree = tree->parent;
}
return (mimi);

}
