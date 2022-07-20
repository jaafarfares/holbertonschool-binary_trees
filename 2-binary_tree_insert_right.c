#include "binary_trees.h"
/**
 *binary_tree_insert_right - ....
 *@parent: ....
 *@value: .....
 *Return: ......
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_n;

	right_n = binary_tree_node(parent, value);

	if (right_n == NULL || parent == NULL)
		return (NULL);

	right_n->n = value;
	if (parent->right != NULL)
	{
		parent->right->parent = right_n;
		right_n->right = parent->right;
	}
	parent->right = right_n;



	return (right_n);
}
