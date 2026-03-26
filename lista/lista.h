#ifndef LISTA_H
#define LISTA_H

// Configurações Gerais (tamanhos de strings)

#define TAM_TITULO 96
#define TAM_NOME 48

// Definições de status

#define A_FAZER 0
#define EM_ANDAMENTO 1
#define FEITO 2


typedef struct {
    
char Titulo[TAM_TITULO];
char Responsavel[TAM_NOME];
int Status; // De 0 (A fazer) até 2 (Feito)
float Progresso; // De 0.0 (0%) até 1.0 (100%)
int Avaliacao; // De 0 (prioridade baixa) até 5 (prioridade alta)

}Tarefa;

typedef struct {
    
Tarefa * Dados; // Será "interpretado" como vetor
int Tamanho; // Quantas tarefas FORAM inseridas na lista
int Capacidade; // Quantidade máxima de elementos

}Lista;

Lista * CriarLista(int C); // C é a capacidade da lista
void AdicionarTarefa(Lista * L, Tarefa T);
void GerarHTMLTabela(Lista *Lista, char *CaminhoArquivo);



#endif