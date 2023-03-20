#include <stdio.h>
#include <stdlib.h>
#include "pilha2.h"

void Criapilha(pilha *p)
{
    p->topo = NULL;
    p->tam = 0;
}

int pilhaVazia(pilha p)
{
    return p.topo == NULL;
}

int empilha(pilha *p, int dado)
{
    no *n;
    n = (no *)malloc(sizeof(no));

    if(n == NULL)return 0;
    //preenche campos do nó
    n->dado = dado;
    n->prox = p->topo;
    p->topo = n;//coloca nó no topo
    p->tam++;
    return 1;
}

int desempilha(pilha *p, int *dado)
{
    if(pilhaVazia(*p))return 0;

    *dado = p->topo->dado;
    p->topo = p->topo->prox;
    p->tam--;
    return 1;
}

void converte_mostra(int num)
{
    pilha p;
    Criapilha(&p);
    int dado;

    //enquanto num eh diferente de 1, vai dividindo por 2
    while(num != 1)
    {
        dado = num % 2;//dado eh o resto da divisao por 2 [0, 1]
        empilha(&p, dado);//empilha dado
        num = num / 2;//num eh o quaociente da divisao por 2
    }

    //enquanto topo nao eh vazio vai desempilhando
    printf("1");//numero significativo
    while(p.topo != NULL)
    {
        desempilha(&p, &dado);
        printf("%d",dado);
    }
}
