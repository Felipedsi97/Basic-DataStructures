#include <stdio.h>
#include "pilha5.h" 
#include <string.h>
int main()
{
	char str[MAX];
	printf("Digite sua string: ");
	scanf("%s",str);
	if(verifica(str) == TRUE)
		printf("Y\n");
	else printf("N\n");

return 0;}
