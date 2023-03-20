#include <stdio.h>
#include "pilha6.h"
#include <string.h>
void Criapilha(pilha *p)
{
	p->topo = -1;
}

int pilhaVazia(pilha p)
{
	if(p.topo == -1)return TRUE;
	else return FALSE;
}

int pilhaCheia(pilha p)
{
	if(p.topo == MAX-1)return TRUE;
	else return FALSE;
}

void empilha(pilha *p, char dado)
{
	if(pilhaCheia(*p) == TRUE)
	{
		printf("pilha vazia\n");
		return ;
	}

	else
	{
		p->topo++;
		p->dado[p->topo] = dado;
	}
}

char desempilha(pilha *p)
{
	char dado;//dado do topo a ser retornado

	//se pilha vazia retorna caracter 'E'
	if(pilhaVazia(*p) == TRUE)
	{
		printf("Pilha Cheia");
		return 'E';
	}

	else
	{
		dado = p->dado[p->topo];
		p->topo--;
		return dado;
	}
}

int verifica(char *str)
{
	int i;
	pilha p;
	Criapilha(&p);
	//For que lê a string e empilha somente os caracteres ([{ sendo o resto ignorado e caso encontrar os caracteres )]} verifica se o topo eh compatível com ele, se for desempilha , se nao a expressao eh invalida, para a funcao ser valida por completa ao sair do for o topo tem de ser -1
	for(i = 0;i < strlen(str); i++)
	{
		//empilha caracteres de abertura
		if(str[i] == '(' || str[i] == '[' || str[i] == '{')
		empilha(&p, str[i]);
	
		//caso caracter )
		else if(str[i] == ')')
		{
			if(p.dado[p.topo] == '(')
			desempilha(&p);
			else return FALSE;
		}
		// ]
		else if(str[i] == ']')
		{
			if(p.dado[p.topo] == '[')
			desempilha(&p);
			else return FALSE;
		}
		//}
		else if(str[i] == '}')
		{
			if(p.dado[p.topo] == '{')
			desempilha(&p);
			else return FALSE;
		}
	}
	//saindo do for verificar se topo estah vazio pois podem haver casos de a expressao ser assim: (3+4
	if(p.topo == -1)return TRUE;
	else return FALSE;
}
