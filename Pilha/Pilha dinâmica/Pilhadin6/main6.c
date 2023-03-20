#include <stdio.h>
#include "pilhadin6.h"

int main()
{
	char str[100];
	printf("Digite sua expressao\n");
	scanf("%s",str);

	if(verifica(str) == 1)
	printf("Expressao valida\n");
	else
	printf("Expressao nao eh valida\n");

return 0;
}
