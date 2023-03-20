#include <stdio.h>
#include "pilha2.h"

int main()
{
	//declarando pilhas N e P
	pilha P, N;
	int i, dado;

	//inicializando topo
	Criapilha(&P);
	Criapilha(&N);
	
	printf("Digite %d dados:\n",MAX);
	printf("Numeros positivos na pilha P, negativos na N e [0 remove elemento de P e N]\n");
	//loop de inserção de dados
	for(i  = 0;i < MAX; i++)
	{
		scanf("%d",&dado);
		//se 0
		if(dado == 0) desempilha(&P,&N);
		//se dado par
		else if(dado > 0) empilha(&P, dado);
		//se dado impar
		else if(dado < 0) empilha(&N, dado);
	}	
	
	//imprimindo pilhas
	imprime(P, N);
return 0;
}
