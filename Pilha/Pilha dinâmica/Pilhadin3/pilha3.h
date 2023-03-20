#define TRUE 1
#define FALSE 0
typedef struct No{
	int dado;
	struct No *prox;
} no;

typedef struct Pilha{
	no *topo;
	int tamanho;
} pilha;

void Criapilha(pilha *p);

int pilhaVazia(pilha p);

//funcao que verifica se dado a ser inserido eh par, impar ou 0 e empilha
void verifica(pilha *p, pilha *n, int dado);

void empilha(pilha *p, int dado);

//retorna TRUE se desempilhou ou FALSE se pilha vazia
int desempilha(pilha *p, int *dado);//o dado inserido na main eh acessado pelo *dado

//imprime dados empilhados das pilhas p e n
void imprime(pilha *p, pilha *n);

