#include "TAB_TABB.h"
#define PRETO 1
#define VERMELHO 0

void caux (TAB *a, int cor){
	if (!a) return;
	a->cor = cor;
	if (cor) 
		cor = 0;
	else if (!cor)
		cor = 1;
	printf("%d\n", cor);
	caux(a->esq, cor);
	caux(a->dir, cor);
}

void colore(TAB *a){
	if (!a) return;
	caux(a, 1);

}