#define MAX 8//numero de dados das pilhas

typedef struct Pilha
{
	int topo;
	int dados[MAX];

} pilha;

void Criapilha(pilha *p);

void empilha(pilha *p,int dado);

void desempilha(pilha *p, pilha *n);

void imprime(pilha p, pilha n);
