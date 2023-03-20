typedef struct No{
	char dado;
	struct No *prox;
}no;

typedef struct Pilha{
	no *topo;
	int tamanho;
} pilha;

void Criapilha(pilha *p);

int pilhaVazia(pilha p);

int empilha(pilha *p, char dado);

int desempilha(pilha *p, char *dado);

//funcao que verifica se eh palindromo
int verifica(char *str);

