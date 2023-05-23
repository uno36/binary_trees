#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
        int r_height, l_height;

        if (!tree)
                return (0);
        r_height = _binary_tree_height(tree->right);
        l_height = _binary_tree_height(tree->left);
        return (1 + ((r_height >= l_height) ? r_height: l_height));
}


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
