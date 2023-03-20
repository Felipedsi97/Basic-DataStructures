#include <stdio.h>
#include "pilha6.h"

int main()
{
	char str[MAX];
	printf("Digite sua expressao\n");
	scanf("%s",str);

	if(verifica(str) == TRUE)
		printf("Expressao Valida\n");
	else
		printf("Expressao invalida\n");


return 0;}
