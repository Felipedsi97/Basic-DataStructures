#include <stdio.h>
#include <stdlib.h>
#include "filac.h"
int main()
{
    fila f;
    Criafila(&f);
    int op = 0, dado, i;

    while(op != 4)
    {
        printf("\nDigite sua opcao: 1-inserir 2-remover 3-mostrar 4-sair: ");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
            printf("Insira o dado: ");
            scanf("%d",&dado);
            insereFila(&f, dado);
            break;

            case 2:
            removeFila(&f, &dado);
            printf("Dado %d removido\n", dado);
            break;

            case 3:
            printf("\nFila : ");
            for( i = 0; i < MAX; i++)
                    printf("%d ", f.dado[i]);
            printf("\nf.fim = %d, f.ini = %d \n",f.fim, f.ini);
            break;

            default: exit(1); break;
        }
    }

    return 0;
}
