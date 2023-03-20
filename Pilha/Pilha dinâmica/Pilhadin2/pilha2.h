typedef struct No{
    int dado;
    struct No *prox;
} no;

typedef struct Pilha{
    no *topo;
    int tam;
} pilha;

void Criapilha(pilha *p);

int pilhaVazia(pilha p);

int empilha(pilha *p, int dado);

int desempilha(pilha *p, int *dado);

void converte_mostra(int num);
