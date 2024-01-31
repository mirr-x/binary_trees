#include "binary_trees.h"
#define f(b) (b != NULL && b->parent == NULL) ? 1 : 0

int binary_tree_is_root(const binary_tree_t *n)
{
    return f(n);
}
