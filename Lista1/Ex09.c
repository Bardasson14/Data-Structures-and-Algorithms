#include "TAB_TABB.h"


int nf(TAB *a){
    if (!a)
        return 0;
    if ((!a->esq)&&(!a->dir))
        return 1;
    return nf(a->dir) + nf(a->esq);
}
