#define TRUE 1
#define FALSE 0
typedef struct No{
	char dado;
	struct No *prox;
} no;

typedef struct Pilha{
	no *topo;
	int tamanho;
} pilha;

void Criapilha(pilha *p);

//se TRUE pilha vazia, se nao FALSE
int pilhaVazia(pilha p);

//retorna TRUE se empilhou, FALSE se nao
int empilha(pilha *p, char dado);

//retorna TRUE se desempilhou ,se nao FALSE
char desempilha(pilha *p);

//verifica se a palavra eh ou nao palindromo
int verifica(char str[], int tam);
