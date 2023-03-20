#include <stdio.h>
#include "pilhadin4.h"

int main()
{
	pilha p, z, nova;
	Criapilha(&p);
	Criapilha(&z);
	
	int dado, aux = 1;

	//-------------------preenchendo pilhas----------
	printf("Lembrando que voce precisa digitar os dados do maior para o menor(menores no topo)\n");
	while(aux != 0)
	{	
		//empilha em p
		printf("Digite o dado da pilha P: ");	
		scanf("%d",&dado);
		empilha(&p, dado);

		//empilha em z
		printf("Digite o dado da pilha Z: ");	
		scanf("%d",&dado);
		empilha(&z, dado);

		printf("Deseja digitar proximo numero?'1'para sim, '0' para nao: ");
		scanf("%d",&aux);
	}
		
	//-----------------Junta Pilhas--------------
	nova = junta(&p, &z);
	
	//----------Mostra resultado(sem desempilhar)---------
	no *n;//ponteiro para nó que vai armazenar o endereço dos topos
	int i, tam = nova.tamanho;//guarda tamanho da pilha nova para usar no loop
	
	printf("\nDados pilha nova(do topo ao ultimo)\n");
	while(tam > 0)
	{
		n = nova.topo;//n armazena endereço do topo
		printf("%d\n",n->dado);//mostra dado do topo
		nova.topo = nova.topo->prox;//o novo topo vira o proximo nó da pilha
		tam--;
	}	

return 0;
}
