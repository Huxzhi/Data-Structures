#include <stdio.h>

typedef struct bitNode {
    int data;
    struct bitNode *lchild, *rchild;
} * BiTree;

int treeDepth(BiTree T)
{
    if (T == NULL) {
        return 0;
    } else {
        int l = treeDepth(T->lchild);
        int r = treeDepth(T->rchild);
        return l > r ? l + 1 : r + 1;
    }
}