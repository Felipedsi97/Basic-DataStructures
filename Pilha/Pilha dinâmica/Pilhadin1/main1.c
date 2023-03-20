#include <stdio.h>
#include "pilhadin1.h"
#include <string.h>

int main()
{
	char str[50];
	printf("Digite sua frase: ");
	scanf("%s",str);

	if(verifica(str, strlen(str)) == TRUE)
		printf("Eh palindromo\n");
	else 
		printf("Nao eh palindromo\n");

return 0;
}
