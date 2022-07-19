#include "binary_trees.h"
/**
 *
 *
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_n;

	node_n = binary_tree_node(parent, value);
	
	if (node_n == NULL || parent == NULL)
		return (NULL);

	node_n->n = value;
	if (parent->left != NULL)
	{	
		parent->left->parent = node_n;
		node_n->left = parent->left;
	}
	parent->left = node_n;
	
	
	
	return (node_n);
}
