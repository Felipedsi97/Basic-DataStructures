#include <stdio.h>
#include "pilha1.h"

int main()
{
	pilha p;
	Criapilha(&p);

	empilha(&p, 10);
	empilha(&p, 30);
	empilha(&p, 5);

	printf("topo: %d\n",top(p));
	listaDados(p);
	printf("\ndesempilha: %d\n",desempilha(&p));

return 0;
}
