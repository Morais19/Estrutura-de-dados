#include <stdio.h>
#include <stdlib.h>

#include "fracao.h"

//Implementação de cada operação

Fracao criarFracao(int N, int D) {

    if (D == 0) {
        printf("ERRO: nao existe fracao com denominador ZERO!\n");
        exit(1);
    }
    
    Fracao F;

    F.Numerador = N;
    F.Denominador = D;

    return F;
}

void exibirFracao(Fracao F) {

    printf("%d / %d \n", F.Numerador, F.Denominador);

}

int calcularMDC(int A, int B) {
    int Resto = A % B;

    while (Resto != 0) {
        A = B;
        B = Resto;
        Resto = A % B;
    }

    return B;
    
}

Fracao simplificarFracao(Fracao F) {

    int mdc = calcularMDC(F.Numerador, F.Denominador);

    F.Numerador = F.Numerador/ mdc;
    F.Denominador = F.Denominador /mdc;
    return F;
}