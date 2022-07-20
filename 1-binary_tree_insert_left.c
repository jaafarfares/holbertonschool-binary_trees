#include "binary_trees.h"
/**
 * binary_tree_insert_left - ......
 *@parent: .........
 *@value: ......
 *Return: ...
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_n;

	if (parent == NULL)
		return (NULL);
	left_n = binary_tree_node(parent, value);
	if (left_n == NULL || parent == NULL)
		return (NULL);

	left_n->n = value;
	if (parent->left != NULL)
	{
		parent->left->parent = left_n;
		left_n->left = parent->left;
	}
	parent->left = left_n;
	return (left_n);
}
