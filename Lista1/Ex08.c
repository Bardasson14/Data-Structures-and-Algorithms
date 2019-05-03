#include "TAB_TABB.h"

int ni(TAB *a){
    if (!a)
        return 0;
    if ((!a->esq)&&(!a->dir))
        return 0;
    return 1 + ni(a->dir) + ni(a->esq);
}
