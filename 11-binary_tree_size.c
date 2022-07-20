#include "binary_trees.h"
/**
 *binary_tree_size - ...
 *@tree: ...
 *Return: ....
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;


	if (tree == NULL)
		return (0);
	size++;
	if (tree->left != NULL)
	{
		size += binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		size += binary_tree_size(tree->right);
	}

		return (size);

}
