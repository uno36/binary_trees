#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_delete - Function that deletes an entire binary tree
 *
 * @tree: Pointer to the root node of the tree to delete
 * Return: No return (Void function)
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}

	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}

free(tree);
return;

}