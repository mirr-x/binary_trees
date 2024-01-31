#include "binary_trees.h"

#define f(z, y) (z && !(z->y))
#define g(x) (f(x, left) && f(x, right))

int binary_tree_is_leaf(const binary_tree_t *node)
{
    return g(node);
}
