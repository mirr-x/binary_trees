#include "binary_trees.h"

#define NN tree
#define HJ func
#define QW tree->n
#define ZM tree->left
#define HX tree->right
#define YV if (NN != NULL && HJ != NULL) { HJ(QW); binary_tree_preorder(ZM, HJ); binary_tree_preorder(HX, HJ); }

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    YV;
}