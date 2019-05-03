#include "TAB_TABB.h"

int igual (TAB* a1, TAB* a2){
    if ((!a1) && (!a2)) return 1;
    if ((!a1)||(!a2)) return 0;
    return ((a1->info==a2->info) && (igual(a1->esq, a2->esq)) && (igual(a1->dir, a2->dir)));
}
