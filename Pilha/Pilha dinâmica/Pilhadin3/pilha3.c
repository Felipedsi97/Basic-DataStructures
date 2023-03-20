#include "pilha3.h"
#include <stdlib.h>
#include <stdio.h>

void Criapilha(pilha *p)
{
	p->topo = NULL;
	p->tamanho = 0;
}

int pilhaVazia(pilha p)
{
	if(p.topo == NULL)return TRUE;
	else return FALSE;
}

void verifica(pilha *p, pilha *n, int dado)
{
	if(dado > 0)
	{
		printf("Dado %d inserido na pilha P\n",dado);
		empilha(p, dado);
	}
	else if(dado < 0)
	{
		printf("Dado %d inserido na pilha N\n",dado);
		empilha(n, dado);
	}
	else if(dado == 0)
	{
		printf("Topo de ambas as pilhas foi desempilhado\n");
		desempilha(p, &dado);
		desempilha(n, &dado);
	}
}

void empilha(pilha *p, int dado)
{
	//ponteiro para nó n, nao confundir com a pilha n
	no *n;
	n = (no *)malloc(sizeof(no));
	if(n == NULL)
	{
		printf("Memoria cheia\n");
		return ;
	}
	else 
	{
		n->dado = dado;
		n->prox = p->topo;
		p->topo = n;
		p->tamanho++;
	}
}

int desempilha(pilha *p, int *dado)
{
	if(pilhaVazia(*p) == TRUE)
	{
		printf("Pilha Vazia\n");
		return FALSE;
	}
	else
	{
		*dado = p->topo->dado;
		p->topo = p->topo->prox;
		p->tamanho--;

		return TRUE;
	}
}

void imprime(pilha *p, pilha *n)
{
	int dado;
	printf("\n--Pilha P--\n");
	while(p->topo != NULL)
	{
		desempilha(p, &dado);
		printf("%d\n",dado);
	}

	printf("\n--Pilha N--\n");
	while(n->topo != NULL)
	{
		desempilha(n, &dado);
		printf("%d\n",dado);
	}
}
