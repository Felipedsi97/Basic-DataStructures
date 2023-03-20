#define MAX 100
typedef struct Pilha
{
	int dado[MAX];
} pilha;

void Criapilha(pilha *p);

int pilhaVazia(pilha p);

int pilhaCheia(pilha p);

void empilha(pilha *p,int dado);

int desempilha(pilha *p, int *dado);
