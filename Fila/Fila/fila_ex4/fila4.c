#include <stdlib.h>
#include <stdio.h>
#include "fila4.h"

void Criafila(fila *f)
{
	f->ini = NULL;
	f->fim = NULL;
	f->tam = 0;
}

int filaVazia(fila f)
{
	if(f.ini == NULL)return 1;
	else return 0;
}

int insereFila(fila *f, int cod, char tipo)
{
	no *n;
	n = (no *)malloc(sizeof(no));

	if(n == NULL) return 0;

	n->dado.cod = cod;
	n->dado.tipo = tipo;
	n->prox = NULL;
	f->tam++;
	if(filaVazia(*f) == 1)
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

int removeFila(fila *f, int *cod, char *tipo)
{
	no *n; 
	if(filaVazia(*f) == 1) return 0;
	
	n = f->ini;
	*cod = f->ini->dado.cod;
	*tipo = f->ini->dado.tipo;
	f->tam--;
	f->ini = f->ini->prox;
	free(n);
	return 1;
}

void imprime(fila f)
{
	no *n;
	int tam = f.tam;
	while(tam > 0)
	{
		n = f.ini;
		printf("Codigo: %d Tipo:%c\n",f.ini->dado.cod, f.ini->dado.tipo);
		f.ini = f.ini->prox;
		tam--;
	}
}
