#include <stdio.h>
#include "pilha3.h"

void Criapilha(pilha *p)
{
	p->topo = -1;
}

int pilhaVazia(pilha p)
{
	if(p.topo == -1) return 1;
	else return 0;
}

int pilhaCheia(pilha p)
{
	if(p.topo == MAX-1) return 1;
	else return 0;
}
//insere valor na pilha
void empilha(pilha *p, int valor)
{
	//se pilha cheia sai da funcao
	if(pilhaCheia(*p) == 1) return ;

	p->topo++;
	p->valores[p->topo] = valor;
}

//desempilha e retorna valor desempilhado
int desempilha(pilha *p)
{
	if(pilhaVazia(*p) == 1)
	{
		printf("Pilha Vazia\n");
		return -999;//caso pilha vazia retorna o numero -999
	}

	int valor;
	valor = p->valores[p->topo];
	p->topo--;
	return valor;
}

//funcao que junta as pilhas, pega os menores elementos e os empilha até chegar no maior
pilha junta(pilha *p, pilha *k)//n eh numero de elementos
{
	pilha nova;
	Criapilha(&nova);
	int i, stop = 0;

	//enquanto as duas estiverem cheias desempilha os menores topos até 1 delas ficar vazia
	while(stop == 0)
	{	
		if(p->valores[p->topo] < k->valores[k->topo])
			empilha(&nova, desempilha(p));

		else if(p->valores[p->topo] > k->valores[k->topo])
			empilha(&nova, desempilha(k));
		
		//se forem iguais
		else 
		{
			empilha(&nova, desempilha(k));
			empilha(&nova, desempilha(p));
		}

		if(p->topo == -1 || k->topo == -1) stop = 1;
	}

	//se p ta vazio preenche nova com o resto que tem em k
	if(p->topo == -1)
		while(k->topo != -1)
			empilha(&nova, desempilha(k));

	//se k vazio preenche nova com resto em p
	else 
		while(p->topo != -1)
			empilha(&nova, desempilha(p));

return nova;
}

