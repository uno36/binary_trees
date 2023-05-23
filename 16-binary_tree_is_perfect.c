#include "binary_trees.h"

/**
 * _binary_tree_height - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, 1, otherwise, 0.
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
 * _binary_tree_balance - Returns the depth of a given
 *         node in a binary tree.
 * @tree: A pointer to the node to measure the depth of.
 *
 * Return: The depth of node.
 */
int _binary_tree_balance(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}

/**
 * sub_tree_perfect - Returns a leaf of a binary tree.
 * @tree: A pointer to the root node of the tree to find a leaf in.
 *
 * Return: A pointer to the first encountered leaf.
 */
int sub_tree_perfect(const binary_tree_t *tree)
{
        if (tree && !tree->right & !tree->left)
                return (1);

        if (tree && tree->right && tree->left)
                return (1 && sub_tree_perfect(tree->left)
                && sub_tree_perfect(tree->right));
        return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        if (!tree)
                return (0);

        if (_binary_tree_balance(tree) != 0)
                return (0);

        return (sub_tree_perfect(tree->left) && sub_tree_perfect(tree->right));
}
