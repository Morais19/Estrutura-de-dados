#include <stdio.h>
#include <stdlib.h>

#define ERRO -1
int PesquisaSequencial(int * Vetor, int Tamanho, int Chave);
int Contador;

int main() {

    system("cls");

    int V[] = {
        14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
        40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
        30, 41, 15, 27, 33, 18, 26, 39, 12, 21
    };

    int N = sizeof(V) / sizeof(int); //Cálculo do tamanho do vetor
    

    int T1 = PesquisaSequencial(V, N, 16); // 8
    printf("%d \t", Contador);

    if (T1 != ERRO) printf("O numero esta na posicao %d\n", T1);
    else printf("Elemento nao esta no vetor\n");
    
    int T2 = PesquisaSequencial(V, N, 21); // 29
    printf("%d \t", Contador);

    if (T2 != ERRO) printf("O numero esta na posicao %d\n", T2);
    else printf("Elemento nao esta no vetor\n");

    int T3 = PesquisaSequencial(V, N, 99); // Não está no vetor
    printf("%d \t", Contador);

    if (T3 != ERRO) printf("O numero esta na posicao %d\n", T3);
    else printf("Elemento nao esta no vetor\n");

    return 0;
}

int PesquisaSequencial(int * Vetor, int Tamanho, int Chave) {

    Contador = 0;

    for (int i = 0; i < Tamanho; i++)  {
        Contador++;
        if(Vetor[i] == Chave) {
            return i;
        }
    }

    return ERRO; // Para ocasiões em que a chave não pertence ao vetor
}