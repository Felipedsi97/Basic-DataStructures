#include "listad.h"
#include <stdlib.h>
#include <stdio.h>
void Crialista(lista *l)
{
	l->ini = NULL;
	l->fim = NULL;
	l->tam = 0;
}

int listaVazia(lista l)
{
	return l.ini == NULL;
}

int insereNo(lista *l, int dado)
{
	no *n, *ant, *atual;
	n = (no *)malloc(sizeof(no));	
	if(n == NULL) return 0;
	
	n->dado = dado;
	n->prox = NULL;
	n->ant = NULL;
	l->tam++;
	//se primeiro nó da lista
	if(listaVazia(*l))
	{
		l->ini = n;
		l->fim = n;
	}

	else
	{
		ant = NULL;
		atual = l->ini;
		while(atual != NULL && atual->dado < dado)
		{
			ant = atual;
			atual = atual->prox;
		}
		//se primeiro nó(nao tem anterior)
		if(ant == NULL)
		{
			n->prox = atual;//att prox do n
			atual->ant = n;//att ant do atual
			l->ini = n;
		}

		//se no final
		else if(atual == NULL)
		{
			ant->prox = n;
			n->prox = atual;
			l->fim = n;
		}

		//se no meio
		else
		{
			ant->prox = n;
			n->prox = atual;
			n->ant = ant;
			atual->ant = n;
		}	
	}
	return 1;	
}

int removeNo(lista *l, int dado)
{
	if(listaVazia(*l)) return 0;

	no *n, *ant, *atual;
	ant = NULL;
	atual = l->ini;
	l->tam--;
	while(atual != NULL && atual->dado != dado)
	{
		ant = atual;
		atual = atual->prox;	
	}

	//se no começo
	if(ant == NULL)
	{
		atual->prox->ant = ant;
		l->ini = atual->prox;
	}
	//se no final
	else if(atual == l->fim)
	{
		ant->prox = atual->prox;
		l->fim = ant;
	}
	//se nao encontrou
	else if(atual == NULL)
	{
		printf("Nao existe");
		return 0;
	}
	//se no meio
	else
	{
		ant->prox = atual->prox;
		atual->prox->ant = ant;
	}

	free(atual);
	return 1;
}
