#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lista.h"

int main () {

    // Primeira forma de utilização: declarando uma variável P do tipo tarefa

    Tarefa P; 

    strcpy(P.Titulo, "Estudar para a prova de Matematica");
    strcpy(P.Responsavel, "Andre");
    P.Status = EM_DESENVOLVIMENTO;
    P.Progresso = 0.60;
    P.Avaliacao = 4; // Prioridade alta

    system("cls");
    printf("%s \n", P.Titulo);

    return 0;

}