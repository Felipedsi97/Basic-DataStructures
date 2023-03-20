#include <stdio.h>
#include <stdlib.h>
#include "pilha1.h"	

void Criapilha(pilha *p)
{
	p->topo = -1;
}

//insere elemento el na pilha
void empilha(pilha *p,int el)
{
	if(pilhaCheia(*p) == TRUE)
		printf("Pilha cheia\n");
	else
	{
		p->topo++;//acrescenta topo
		p->elementos[p->topo] = el;//adiciona elemento
	}
}

//desempilha elemento do topo e retorna ele
int desempilha(pilha *p)
{
	int aux;
	if(pilhaVazia(*p) == TRUE)
	{
		printf("Pilha vazia\n");
		return -1;
	}
	else
	{	
		aux = p->elementos[p->topo];
		p->topo--;
		return aux;
	}
}

//verifica se estah vazia
int pilhaVazia(pilha p)
{
	//se pilha vazia return true
	if(p.topo == -1)	return TRUE;
	
	return FALSE;
}

//verifica se estah cheia
int pilhaCheia(pilha p)
{	
	//se pilha cheia retorna true
	if(p.topo == MAX-1)	return TRUE;
	
	return FALSE;
}

//retorna valor do topo
int top(pilha p)
{
	return p.elementos[p.topo];
}

//imprime lista de dados
void listaDados(pilha p)
{
	int i;
	for(i = p.topo;i >= 0 ;i--)
		printf("elemento[%d] = %d\n",i, p.elementos[i]);
}
