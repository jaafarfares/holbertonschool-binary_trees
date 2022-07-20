#include "binary_trees.h"
/**
*binary_tree_height - ...
*@tree: ....
*Return: ...
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h, right_h = 0;


	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h >= right_h)
		return (left_h + 1);
	return (right_h + 1);
}


/**
*binary_tree_balance - ...
*@tree: ....
*Return: ...
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
