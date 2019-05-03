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
