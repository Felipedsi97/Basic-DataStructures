#define TRUE 1
#define FALSE 0
#define MAX 30
typedef struct Pilha
{	
	char dado[MAX];
	int topo;
} pilha;

//--------operações basicas de pilha--------------
void Criapilha(pilha *p);

int pilhaVazia(pilha p);

int pilhaCheia(pilha p);

void empilha(pilha *p, char dado);

char desempilha(pilha *p);

//-------------------------------------------------

//funcao que recebe a string digitada na main e verifica se a expressao eh valida
//retorna 1 se valida , se nao 0
int verifica(char *str);


