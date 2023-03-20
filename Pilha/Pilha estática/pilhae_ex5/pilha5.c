#include "pilha5.h"
#include <stdio.h>
#include <string.h>
//retorna caracter desempilhado
void desempilha(pilha *p)
{	
	if(pilhaVazia(*p) == TRUE)
	{
		printf("Pilha vazia, preencha\n");
		return ;
	}
	p->topo--;
}

void empilha(pilha *p,char dado)
{
	if(pilhaCheia(*p) == TRUE)
	{
		printf("Pilha cheia\n");
		return ;
	}
	p->topo++;
	p->str[p->topo] = dado;
}

int pilhaVazia(pilha p)
{
	if(p.topo == -1)return TRUE;
	return FALSE;
}

//modo diferente de inicializar pilha
pilha Criapilha()
{
	pilha p;
	p.topo = -1;
	return p;
}

int pilhaCheia(pilha p)
{
	if(p.topo == MAX-1)return TRUE;
	return FALSE;
}

int verifica(char *str)
{
	pilha p;
	p = Criapilha();
	int i, flag =0;
	//considerando x[] a parte antes de 'C' da string 
	//e y[] a parte depois de 'C'
	//o for empilha até chegar em 'C' depois compara e desempilha	
	for(i = 0; i < strlen(str); i++)
	{	
		//se flag igual 2 é porque ja empilhou a parte de x[] e chegou em 'C' agora iniciará a parte de desempilhar 
		if(flag == 2) flag =1;
		
		//se chegou em 'C'
		if(str[i] == 'C')
		{
			flag = 2;
		}

		//empilha antes de'C'
		else if(flag == 0)
			empilha(&p, str[i]);
		
		//desempilha e compara com a parte de pois de 'C'
		else if(flag == 1)
		{
			if(str[i] == p.str[p.topo])
			desempilha(&p);
		}
	}
	//ao final do loop a pilha tem de estar vazia
	if(p.topo == -1) return TRUE;
	//se nao estiver vazia eh porque houve caso ABACAB(x<y)
	else return FALSE;
}
