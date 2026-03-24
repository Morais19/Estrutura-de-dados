#include <stdio.h>
#include <stdlib.h>

#include "equipe.h"

int main() {

    system("cls");

    Equipe * Tabela = lerDados("tabela2024.csv"); //Tabela é uma variável do tipo Equipe *, ou seja, é um vetor de equipes

    for (int i = 0; i < 20; i++) {
        printf("%s \n", Tabela[i].Time);
    }

    return 0;
}