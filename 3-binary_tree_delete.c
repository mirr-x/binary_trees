#include <stdlib.h>
#include "binary_trees.h"

#include <stdlib.h>

typedef struct binary_tree_s binary_tree_t;

void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
}
