#include "pilha4.h"
#include <stdio.h>

void Criapilha(pilha *p)
{
	p->dado[0] = 0;//somente guarda o indice do topo e nao o valor do elemento topo
}

int pilhaVazia(pilha p)
{
	if(p.dado[0] == 0)return 1;
	else return 0;
}

int pilhaCheia(pilha p)
{
	if(p.dado[0] == MAX-1)return 1;
	else return 0;
}

void empilha(pilha *p, int dado)
{
	//se pilha cheia sai da funcao
	if(pilhaCheia(*p) == 1)return ;

	else
	{
		p->dado[0]++;
		p->dado[p->dado[0]] = dado;	
	}
}

//retorna 1 se desempilhou 0 se nao, o dado desempilhado eh passado por paramentro
int desempilha(pilha *p, int *dado)
{
	if(pilhaVazia(*p) == 1)return 0;

	else
	{
		*dado = p->dado[p->dado[0]];
		p->dado[0]--;
	}
	return 1;
}
