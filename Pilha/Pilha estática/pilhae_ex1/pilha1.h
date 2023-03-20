#define MAX 30
#define TRUE 1
#define FALSE 0

typedef struct Pilha{
	int topo, elementos[MAX];
} pilha;

void Criapilha(pilha *p);

void empilha(pilha *p,int el);

int desempilha(pilha *p);

int pilhaVazia(pilha p);

int pilhaCheia(pilha p);

int top(pilha p);

void listaDados(pilha p);
