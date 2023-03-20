#include <stdio.h>
#include "listad.h"

int main()
{
	lista l;
	Crialista(&l);

	insereNo(&l, 2);
	insereNo(&l, 4);
	insereNo(&l, 3);
	insereNo(&l, 5);
	insereNo(&l, 9);
	insereNo(&l, 7);
	insereNo(&l, 10);
	removeNo(&l, 5);
	removeNo(&l, 2);
	removeNo(&l, 10);

	no *n = l.ini;
	while(n != NULL)
	{
		printf("%d ",n->dado);
		n = n->prox;
	}printf("\n");

return 0;
}
