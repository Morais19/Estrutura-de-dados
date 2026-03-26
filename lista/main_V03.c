#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lista.h"

int main () {

    // Terceira forma de utilização: declarando e inicializando a variável struct

    Tarefa P = {"Estudar para a prova de Matematica", "Andre",EM_DESENVOLVIMENTO, 0.60, 4};

    system("cls");
    printf("Endereco da struct: %X\n", &P);
    printf("%s \n", P.Titulo);
    

    return 0;

}