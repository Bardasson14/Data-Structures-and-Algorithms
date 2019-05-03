#include "TAB_TABB.h"

TAB *copia(TAB *a){
    TAB *b = (TAB*)malloc(sizeof(TAB));
    b->info = a->info;
    if (a->esq)
        b->esq = copia(a->esq);
    if (a->dir)
        b->dir = copia(a->dir);
    return b;
}

int main(void){
    TAB *n4 = cria(4, NULL, NULL);
    TAB *n5 = cria(5, NULL, NULL);
    TAB *n2 = cria(2, n4, n5);
    TAB *n6 = cria(6, NULL, NULL);
    TAB *n3 = cria(3, NULL, n6);
    TAB *n1 = cria(1, n2, n3);
    imp_pre(n1);
    printf("\n");
    TAB *b = copia(n1);
    imp_pre(b);
}