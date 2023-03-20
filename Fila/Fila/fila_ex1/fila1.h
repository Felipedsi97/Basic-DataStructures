typedef struct No{
	int dado;
	struct No *prox;
} no;

typedef struct Fila{
	no *ini;
	no *fim;
	int tam;	
} fila;

void Criafila(fila *f);

int filaVazia(fila f);

int insereFila(fila *f, int dado);

int removeFila(fila *f, int *dado);

int comecoFila(fila f);

void listaFila(fila f);
