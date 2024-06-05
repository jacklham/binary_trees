#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left child
 * @parent: pointer to the node to insert the left child
 * @value: value to store in the left child
 * Return: pointer to the left child || NULL on failure or parent is NULL
 * if parent already has a left child, replace with new node and set
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        // Invalid parent pointer
        return NULL;
    }

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
    {
        // Memory allocation failed
        return NULL;
    }

    new_node->value = value;
    new_node->parent = parent;
    new_node->left = parent->left; // Set old left-child as new node's left-child
    new_node->right = NULL;

    parent->left = new_node; // Update parent's left-child

    return new_node;
}
