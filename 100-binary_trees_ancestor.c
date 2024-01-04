#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp1, *tmp2;

	if (!first || !second)
		return (NULL);
	tmp1 = (binary_tree_t *)first;
	while (tmp1)
	{
		tmp2 = (binary_tree_t *)second;
		while (tmp2)
		{
			if (tmp1 == tmp2)
				return (tmp1);
			tmp2 = tmp2->parent;
		}
		tmp1 = tmp1->parent;
	}
	return (NULL);
}
