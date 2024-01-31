#include <stdlib.h>
#include "binary_trees.h"

#define P parent
#define N new_node
#define NN NULL
#define LP left
#define RP right
#define RT return
#define ML malloc
#define DS sizeof
#define TP binary_tree_t
#define V value
#define RN parent->RP->parent = N
#define PRLT parent->RP->LP = parent->RP->LP = parent->RP->LP = parent->RP->LP = N

TP *binary_tree_insert_right(TP *P, int V)
{
    TP *N = ML(DS(TP));
    if (N == NN)
        RT(NN);

    N->n = V;
    N->P = P;
    N->LP = NN;
    N->RP = NN;

    if (P->RP != NN)
    {
        N->RP = P->RP;
        RN;
    }

    P->RP = N;

    PRLT;

    RT(N);
}
