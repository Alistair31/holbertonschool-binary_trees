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

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree , 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizetree;

	sizetree = 0;
	if (tree == NULL)
	{
		return (0);
	}

	sizetree = (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	return (sizetree);
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;
	size_t expected_nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	expected_nodes = (1 << (height + 1)) - 1;

	if (size == expected_nodes)
		return (1);
	else
		return (0);
}
