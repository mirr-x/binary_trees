#include <stdlib.h>
#include "binary_trees.h"

typedef struct binary_tree_s binary_tree_t;

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return NULL;

    // Allocate memory for the new node
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return NULL;

    // Initialize the new node
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    // If the parent already has a left child, set the new node as the left child
    // and update the old left child's parent pointer
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    // Set the new node as the left child of the parent
    parent->left = new_node;

    return new_node;
}
