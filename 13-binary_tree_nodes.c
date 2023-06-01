#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes in a binary tree
 * @tree: pointer to the node binary tree
 * Return: Number the nodes in a binary tree
 * if tree is NULL return 0
 * A NULL pinter is not a node
 * nodes should have at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_of_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		no_of_nodes += 1;
	no_of_nodes += binary_tree_nodes(tree->left);
	no_of_nodes += binary_tree_nodes(tree->right);
	return (no_of_nodes);
}
