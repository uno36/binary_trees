#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right- Function that inserts a node as the right-child
 * of another node
 *
 * @parent: Pointer to the parent of the node to be created
 * @value: Value to be inserted in the desired node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;
	binary_tree_t *temp;

	(void) (*newnode);
	(void) (value);

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = newnode;
		newnode->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = newnode;
		newnode->right = temp;
		newnode->parent = parent;
		temp->parent = newnode;

	}

return (newnode);

}