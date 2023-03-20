#include <stdio.h>
#include "filac.h"

void Criafila(fila *f)
{
    f->ini = -1;
    f->fim = -1;
}

int filaVazia(fila f)
{
    if(f.ini == -1 || f.fim == -1)return 1;
    return 0;
}

int filaCheia(fila f)
{
    if(f.fim == MAX-1 && f.ini == 0)return 1;
    else if(f.ini == f.fim+1)return 1;
    else return 0;
}

int insereFila(fila *f, int dado)
{
    if(filaCheia(*f) == 1)
    {
        printf("Fila cheia\n");
        return 0;
    }

    else if(filaVazia(*f) == 1)
    {
        f->ini++;
        f->fim++;
    }

    //se fim no final e ini nao esta no começo, fim vai para o começo
    else if(f->fim == MAX-1 && f->ini != 0)
        f->fim = 0;

    else
        f->fim++;

    f->dado[f->fim] = dado;

    return 1;
}

int removeFila(fila *f, int *dado)
{
    if(filaVazia(*f) == 1)
    {
        printf("Fila Vazia\n");
        return 0;
    }

    *dado = f->dado[f->ini];
    f->dado[f->ini] = -1;
    f->ini++;
    if(f->ini == MAX)
        f->ini = 0;

    return 1;
}
