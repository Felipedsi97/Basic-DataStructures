#include <stdio.h>
#include "fila1.h"

int main()
{	
	fila f;
	Criafila(&f);

	int dado, stop = 1, op;
	while(stop == 1)
	{
		printf("opcoes: 1-inserir 2-remover 3-mostrar resultado\n");
		scanf("%d",&op);

		switch(op)
		{
			case 1:
			printf("Digite o dado: ");
			scanf("%d",&dado);
			insereFila(&f, dado);
			break;

			case 2:	
			printf("Dado do inicio removido\n");
			removeFila(&f, &dado);
			break;

			case 3: 
			stop = 0;
			break;		
		}
	}

	listaFila(f);
	printf("\n");	
return 0;
}
