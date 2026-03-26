#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lista.h"

int main () {

    // Segunda forma de utilização: declarando um ponteiro P para o tipo tarefa

    Tarefa * P = (Tarefa *) malloc(sizeof(Tarefa)); 

    if (P == NULL) {
        printf("ERRO: não ha memoria para armazenar uma tarefa!\n");
        exit(1);
    }

    

    // Obs: usa-se -> pois P é PONTEIRO para a struct Tarefa

    strcpy(P->Titulo, "Estudar para a prova de Matematica");
    strcpy(P->Responsavel, "Andre");
    P->Status = EM_DESENVOLVIMENTO;
    P->Progresso = 0.60;
    P->Avaliacao = 4; // Prioridade alta

    system("cls");
    printf("Endereco da struct: %X\n", P);
    printf("%s \n", P->Titulo);
    

    return 0;

}