#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n;

	if (!tree || !tree->parent)
		return (0);
	n = 0;
	if (tree->parent)
		n = 1 + binary_tree_depth(tree->parent);
	return (n);
}
