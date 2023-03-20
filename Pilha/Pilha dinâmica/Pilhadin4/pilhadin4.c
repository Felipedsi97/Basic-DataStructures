#include "pilhadin4.h"
#include <stdlib.h>
#include <stdio.h>

void Criapilha(pilha *p)
{
	p->topo = NULL;
	p->tamanho = 0;
}

int pilhaVazia(pilha p)
{
	if(p.topo == NULL) return 1;
	else return 0;
}

int empilha(pilha *p, int dado)
{
	no *n;
	n = (no *)malloc(sizeof(no));
	
	//se nao foi possivel alocar retorna 0
	if(n == NULL) return 0;
	else
	{
		n->dado = dado;
		n->prox = p->topo;
		p->topo = n;
		p->tamanho++;
	}
	return 1;
}

int desempilha(pilha *p, int *dado)
{
	//se pilha vazia retorna 0
	if(pilhaVazia(*p) == 1)return 0;
	else
	{
		*dado = p->topo->dado;
		p->topo = p->topo->prox;
		p->tamanho--;
	}
	return 1;
}

//junta pilhas p e z e retorna nova
pilha junta(pilha *p, pilha *z)
{
	pilha nova;
	Criapilha(&nova);
	int dado;//dado recebe o topo desempilhado das pilhas para empilhar na nova
	int stop = 1;//controla loop

	//while ambas pilhas estiverem cheias
	//verifica qual topo eh menor e empilha
	while(stop == 1)
	{
		//se menor dado topo é o de p
		if(p->topo->dado < z->topo->dado)
		{
			desempilha(p, &dado);//desempilha p e passa topo para dado
			empilha(&nova, dado);
		}

		//se menor dado topo é o de z
		else if(p->topo->dado > z->topo->dado)
		{
			desempilha(z, &dado);//desempilha z e passa topo para dado
			empilha(&nova, dado);
		
		}	

		//se dados iguais empilha os dois
		else
		{
			desempilha(z, &dado);
			desempilha(p, &dado);
			empilha(&nova, dado);
			empilha(&nova, dado);
		}
		if(p->topo == NULL || z->topo == NULL) stop = 0;
	}
	
	//se saiu do loop é porque uma das pilhas estah vazia
	//se pilha p vazia, desempilha o resto de z em nova
	if(p->topo == NULL)
	{
		//enquanto z nao estiver vazia
		while(z->topo != NULL)
		{
			desempilha(z, &dado);
			empilha(&nova, dado);
		}
	}
	
	//se p nao está vazia, z está
	else
	{
		//enquanto p nao estiver vazia
		while(p->topo != NULL)
		{
			desempilha(p, &dado);
			empilha(&nova, dado);
		}		
	}

	return nova;
}
