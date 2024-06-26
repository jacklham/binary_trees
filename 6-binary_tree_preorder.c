#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order travesal
 * @tree: pointer to the root node
 * @func: pointer to a function to call for each node
 * the value of the node must passed a parameter to this function
 * if tree or function is NULL do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Root to left subtree then to right subtree*/

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
