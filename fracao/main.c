#include <stdio.h>
#include <stdlib.h>

#include "fracao.h"

//Implementação da função principal (main)

int main() {

    system("cls");

    Fracao F1 = criarFracao(3, 7);
    exibirFracao(F1);
    F1 = simplificarFracao(F1);
    exibirFracao(F1);

    Fracao F2 = criarFracao(12, 20);
    exibirFracao(F2);
    F2 = simplificarFracao(F2);
    exibirFracao(F2);

    Fracao F3 = criarFracao(-15, 18);
    exibirFracao(F3);
    exibirFracao(simplificarFracao(F3)); // Função Composta

    Fracao F4 = criarFracao(6, 0);
    exibirFracao(F4);

}