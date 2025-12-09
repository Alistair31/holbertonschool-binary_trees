#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the node to measures the height
 * Return: height of the tree , 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefttr, righttr;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	lefttr = binary_tree_height(tree->left);
	righttr = binary_tree_height(tree->right);

	if (lefttr > righttr)
	{
		return (lefttr + 1);
	}
	else
	{
		return (righttr + 1);
	}
}
