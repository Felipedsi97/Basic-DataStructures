#include <stdio.h>
#include <stdlib.h>
#include "fila1.h"

void Criafila(fila *f)
{
	f->ini = NULL;
	f->fim = NULL;
	f->tam = 0; 
}

int filaVazia(fila f)
{
	return f.ini == NULL;
}

int insereFila(fila *f, int dado)
{
	no *n;
	n = (no *)malloc(sizeof(no));

	if(n == NULL) return 0;

	n->dado = dado;
	n->prox = NULL;
	f->tam++;

	if(filaVazia(*f))
	{
		f->ini = n;
		f->fim = n;
	}

	else
	{
		f->fim->prox = n;
		f->fim = n;
	}
	return 1;
}

int removeFila(fila *f, int *dado)
{
	no *n;
	if(filaVazia(*f)) return 0;

	*dado = f->ini->dado;
	n = f->ini;
	f->ini = f->ini->prox;
	f->tam--;
	free(n);
	return 1;
}

int comecoFila(fila f)
{
	return f.ini->dado;
}

void listaFila(fila f)
{
	no *n;;

	printf("Listando elementos da fila\n");
	while(1)
	{
		if(f.ini == NULL) return ;
		n = f.ini;
		printf("%d ", f.ini->dado);
		f.ini = f.ini->prox;
	}
}
