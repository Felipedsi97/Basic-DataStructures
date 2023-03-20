#define MAX 5
typedef struct Fila
{
    int dado[MAX];
    int ini, fim;//indices do final e inicio
} fila;

void Criafila(fila *f);

int filaVazia(fila f);

int filaCheia(fila f);

int insereFila(fila *f, int dado);

int removeFila(fila *f, int *dado);
