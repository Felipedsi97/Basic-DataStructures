#include "pilhadin6.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
	p->tamanho++;
	return 1;
}

int desempilha(pilha *p, char *dado)
{
	if(pilhaVazia(*p)) return 0;
	
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
	int i, tam = strlen(str);
	for(i = 0;i < tam; i++)
	{
		if(str[i] == '(' || str[i] == '[' || str[i] == '{')
		empilha(&p, str[i]);
		
		else if(str[i] == ')')
		{	
			desempilha(&p, &dado);
			if(dado != '(')
			return 0;
		}
		else if(str[i] == ']')
		{
			desempilha(&p, &dado);
			if(dado != '[')
			return 0;
		}
		else if(str[i] == '}')
		{
			desempilha(&p, &dado);
			if(dado != '{')
			return 0;
		}
	}
	if(p.topo == NULL)return 1;
	else return 0;
}
