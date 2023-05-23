#include "binary_trees.h"

/**
 * 
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
 * 
 */
int _binary_tree_balance(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}

/**
 * 
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
 * 
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        if (!tree)
                return (0);

        if (_binary_tree_balance(tree) != 0)
                return (0);

        return (sub_tree_perfect(tree->left) && sub_tree_perfect(tree->right));
}
