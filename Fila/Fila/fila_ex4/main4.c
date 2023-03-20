#include <stdio.h>
#include "fila4.h"

int main()
{
	fila f;
	Criafila(&f);
	int cod, op;
	char tipo;

	while(1)
	{
		printf("1-inserir 2-remover 3-sair\n");	
		scanf("%d",&op);
		if(op == 1)
		{
			printf("Digite o codigo: ");
			scanf("%d",&cod);
			printf("Digite o tipo: ");
			scanf(" %c",&tipo);
			insereFila(&f, cod, tipo);
		}

		else if(op == 2) removeFila(&f, &cod, &tipo);
		else break;
	}

	imprime(f);	
return 0;
}
