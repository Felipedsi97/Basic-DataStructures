#include <stdio.h>
#include "pilha3.h"
int main()
{
	pilha p, n;
	Criapilha(&p);
	Criapilha(&n);

	char ch = 'y';
	int dado;
	printf("Dados positivos seram guardados na pilha P, negativos em N e 0 desempilha de ambas as pilhas.\n");
	while(ch == 'y')
	{
		printf("Digite o dado: ");
		scanf("%d",&dado);
		verifica(&p, &n, dado);
		printf("Deseja digitar outro dado?(digite y para continuar ou qualquer outra letra para sair)");
		scanf(" %c",&ch);
	}
	
	imprime(&p, &n);		

return 0;
}
