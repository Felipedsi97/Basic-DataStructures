typedef struct processo{
	int cod;
	char tipo;
} tprocesso;

typedef struct No{
	tprocesso dado;
	struct No *prox;
} no;

typedef struct Fila{
	no *ini;
	no *fim;
	int tam;
} fila;

void Criafila(fila *f);

int filaVazia(fila f);

int insereFila(fila *f, int dado, char tipo);

int removeFila(fila *f, int *dado, char *tipo);

void imprime(fila f);
