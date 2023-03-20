#include "pilhadin1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int empilha(pilha *p, char dado)
{
	no *n;
	n = (no *)malloc(sizeof(no));

	//se nao for possivel alocar
	if(n == NULL)return FALSE;

	else
	{
		n->dado = dado;//preenche o campo dado do nó n
		n->prox = p->topo;//preenche o proximo com o topo n antigo
		p->topo = n;//topo é o novo nó preenchido
		p->tamanho++;

		return TRUE;
	}
}

//retorna o topo desempilhado
char desempilha(pilha *p)
{
	char dado;
	if(pilhaVazia(*p) == TRUE)return '0';

	else
	{
		dado = p->topo->dado;
		p->topo = p->topo->prox;//o novo topo eh o proximo(nó anterior a esse)
		p->tamanho--;
		return dado;
	}
}

int verifica(char str[], int tam)
{
	int i;
	pilha p;
	Criapilha(&p);

	//empilha os caracteres da string na pilha p
	for(i = 0;i < tam; i++)
		empilha(&p, str[i]);

	//desempilha e verifica se os caracteres sao iguais
	for(i = 0; i < tam; i++)
	{
		if(desempilha(&p) != str[i])//se topo desempilhado é diferente do elemento da string ela nao eh um palindromo
		return FALSE;
		//se for igual nao faz nada, e espera verificar toda string, se sair do for ela eh palindromo
	}
	
	return TRUE;	
}
