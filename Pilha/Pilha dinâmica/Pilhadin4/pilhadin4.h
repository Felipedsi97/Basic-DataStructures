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

int empilha(pilha *p, int dado);

int desempilha(pilha *p, int *dado);

//junta pilhas p e z e retorna nova
pilha junta(pilha *p, pilha *z);
