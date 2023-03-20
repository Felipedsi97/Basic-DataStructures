typedef struct No{
	int dado;
	struct No *prox;	
	struct No *ant;
} no;

typedef struct Lista{
	no *ini;
	no *fim;
	int tam;
} lista;

void Crialista(lista *l);

int listaVazia(lista l);

int insereNo(lista *l, int dado);

int removeNo(lista *l, int dado);
