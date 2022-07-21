#include "binary_trees.h"
/**
 *binary_tree_uncle - ....
 *@node: ...
 *Return: ...
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;


	parent = node->parent;
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (parent->parent->left == parent)
		return (parent->parent->right);
	return (parent->parent->left);

}
