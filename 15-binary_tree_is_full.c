#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        if (!tree->left && !tree->right)
                return (1);
        if (tree->left && tree->right)
                return (binary_tree_is_full(tree->left)
                && binary_tree_is_full(tree->right));
        return (0);
}