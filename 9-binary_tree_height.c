#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: The height of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t Lheight;
	size_t Rheight;


	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		Lheight = binary_tree_height(tree->left) + 1;
		Rheight = binary_tree_height(tree->right) + 1;

		if (Lheight > Rheight)
			return (Lheight);
		else
			return (Rheight);
	}
}