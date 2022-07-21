#include "binary_trees.h"
/**
 *
 *
 *
 *
 *
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->left == tree->right)
		return (1);
	else
		return (0);

}
