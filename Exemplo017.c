#include <stdio.h>
#include <stdlib.h>

// Definindo os dados do Tipo Abstrato de Dados (TAD) fração

typedef struct {
    int Numerador;
    int Denominador;
} Fracao;

// Definindo as OPERAÇÕES do Tipo Abstrato de Dados (TAD) fração

Fracao criarFracao(int N, int D);
Fracao simplificarFracao(Fracao F);
void exibirFracao(Fracao F);

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
