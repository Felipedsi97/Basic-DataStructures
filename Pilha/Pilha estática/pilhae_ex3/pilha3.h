#define MAX 11
typedef struct Pilha{
	int topo;
	int valores[MAX];
} pilha;

void Criapilha(pilha *p);

int pilhaVazia(pilha p);

void empilha(pilha *p, int valor);

int desempilha(pilha *p);

//junta as pilhas em uma só
pilha junta(pilha *p, pilha *k);
