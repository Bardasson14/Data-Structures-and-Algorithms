#include "TAB_TABB.h"

TAB *espelho (TAB *a){
    TAB *b = (TAB*)malloc(sizeof(TAB));
    b->info = a->info;
    if (a->dir)
        b->esq = espelho(a->dir);
    if (a->esq)
        b->dir = espelho(a->esq);
    return b;
}
