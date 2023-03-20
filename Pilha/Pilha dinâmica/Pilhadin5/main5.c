#include <stdio.h>
#include "pilhadin5.h"

int main()
{
	char str[100];

	scanf("%s",str);

	if(verifica(str) == 1)
	printf("Y\n");
	else
	printf("N\n");

}
