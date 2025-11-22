#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_FILA 5
#define TAM_PILHA 3

// Estrutura para representar uma peça
typedef struct {
    char tipo; // 'I', 'O', 'T', 'L'
    int id;    // identificador único
} Peca;

// Estrutura da fila circular
typedef struct {
    Peca itens[TAM_FILA];
    int frente;
    int tras;
    int qtd;
} Fila;

// Estrutura da pilha
typedef struct {
    Peca itens[TAM_PILHA];
    int topo;
} Pilha;

// Funções para fila
void inicializarFila(Fila *f);
int filaCheia(Fila *f);
int filaVazia(Fila *f);
void enfileirar(Fila *f, Peca p);
Peca desenfileirar(Fila *f);

// Funções para pilha
void inicializarPilha(Pilha *p);
int pilhaCheia(Pilha *p);
int pilhaVazia(Pilha *p);
void empilhar(Pilha *p, Peca peca);
Peca desempilhar(Pilha *p);

// Funções auxiliares
Peca gerarPeca(int id);
void exibirEstado(Fila *f, Pilha *p);

int main() {
    Fila fila;
    Pilha pilha;
    int opcao, id = 0;

    srand(time(NULL));

    inicializarFila(&fila);
    inicializarPilha(&pilha);

