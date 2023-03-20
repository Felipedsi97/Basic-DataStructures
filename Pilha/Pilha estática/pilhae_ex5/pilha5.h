#define MAX 30
#define FALSE 0
#define TRUE 1
typedef struct Pilha{
	char str[MAX];
	int topo;
} pilha;

void desempilha(pilha *p);

void empilha(pilha *p, char dado);

int pilhaVazia(pilha p);

pilha Criapilha();

int pilhaCheia(pilha p);

int verifica(char *str);
