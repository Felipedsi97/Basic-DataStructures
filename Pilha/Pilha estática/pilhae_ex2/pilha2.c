#include "pilha2.h"
#include <stdio.h>

void Criapilha(pilha *p)
{
	p->topo = -1;
}

//insere elemento(condição de inserção na main)
void empilha(pilha *p, int dado)
{
	p->topo++;
	p->dados[p->topo] = dado;	
}

//caso o numero na main for 0 "deleta" o topo das duas tads
void desempilha(pilha *p, pilha *n)
{
	p->topo--;
	n->topo--;
}

//imprime dados das duas pilhas na tela
void imprime(pilha p, pilha n)
{	
	int i;
	//imprimindo pilha P
	printf("-Primeira: PILHA P-\n");
	for(i = 0;i <= p.topo; i++)
		printf("Dado[%d] = %d\n",i,p.dados[i]);

	//imprimindo pilha N
	printf("\n-Segunda: PILHA N-\n");
	for(i = 0;i <= n.topo; i++)
		printf("Dado[%d] = %d\n",i,n.dados[i]);
}
