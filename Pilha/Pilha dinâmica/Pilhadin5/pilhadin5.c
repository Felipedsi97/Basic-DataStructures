#include "pilhadin5.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Criapilha(pilha *p)
{
	p->topo = NULL;
	p->tamanho = 0;
}

int pilhaVazia(pilha p)
{
	return p.topo == NULL;
}

int empilha(pilha *p, char dado)
{
	no *n;
	n = (no *)malloc(sizeof(no));

	if(n == NULL) return 0;
	
	n->dado = dado;
	n->prox = p->topo;
	p->topo = n;
	p->tamanho ++;
	return 1;
}

int desempilha(pilha *p, char *dado)
{
	if(pilhaVazia(*p) == 1) return 0;

	*dado = p->topo->dado;
	p->topo = p->topo->prox;
	p->tamanho--;
	return 1;
}

int verifica(char *str)
{
	pilha p;
	Criapilha(&p);
	char dado;
	int i;

	for(i = 0;i < (strlen(str)-1)/2; i++)
	empilha(&p, str[i]);

	for(i = (strlen(str)+1)/2 ; i < strlen(str); i++)
	{
		if(p.topo->dado != str[i])return 0;

		else
		desempilha(&p, &dado);
	}
	if(p.topo == NULL)return 1;
}

