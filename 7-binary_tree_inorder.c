#include "binary_trees.h"

#define NN tree
#define HJ func
#define QW tree->n
#define ZM tree->left
#define HX tree->right
#define YV                           \
    if (NN != NULL && HJ != NULL)    \
    {                                \
        binary_tree_inorder(ZM, HJ); \
        HJ(QW);                      \
        binary_tree_inorder(HX, HJ); \
    }

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    YV;
}
