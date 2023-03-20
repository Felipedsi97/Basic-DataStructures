#include <stdio.h>
#include "pilha3.h"

int main()
{
	pilha p, k, nova;
	//inicializando
	Criapilha(&p);
	Criapilha(&k);

	int n, valor, i;
	printf("Digite o numero(maximo %d) de elementos das pilhas\n", MAX-1);
	scanf("%d",&n);
	//----------------preenchendo pilhas 1 e 2-------------
	printf("\n-Preenchendo 1° pilha-\n");
	for(i = 0;i <n ;i++)
	{
		printf("pilha1[%d] = ",i);
		scanf("%d",&valor);
		empilha(&p, valor);
	}

	printf("\n\n-Preenchendo 2° pilha-\n");
	for(i = 0;i <n ;i++)
	{
		printf("pilha2[%d] = ",i);
		scanf("%d",&valor);
		empilha(&k, valor);
	}

	nova = junta(&p,&k);//junta as duas pilhas digitadas em ordem crescente
	
	printf("\nNova pilha\n");
	for(i = 0;i < 2*n;i++)
	{
		printf("nova[%d] = %d\n",i,nova.valores[i]);
	}

return 0;}
