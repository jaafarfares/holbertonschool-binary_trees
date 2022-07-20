#include "binary_trees.h"
/**
* binary_tree_leaves - ...
*@tree: ...
*Return: ....
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size_l = 0;


	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		size_l++;
	if (tree->left)
	{
		size_l += binary_tree_leaves(tree->left);
	}
	if (tree->right)
	{
		size_l += binary_tree_leaves(tree->right);
	}
		return (size_l);
}
