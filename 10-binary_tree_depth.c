#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_depth - Function that measures the depth of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * Return: Depth of the binary tree, 0 if none
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		return (binary_tree_depth(tree->parent) + 1);
	else
		return (0);

}