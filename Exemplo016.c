// Algoritmo mais eficiente e rápido
#include <stdio.h>
#include <stdlib.h>

// Protótipo da função
int ehprimo(int N);  

// Implementação da função principal
int main() {

    system("cls");

    int Numero;

    INICIO:

        printf("Informe um numero: ");
        scanf("%d", &Numero);

        if(ehprimo(Numero) == 1) printf("%d eh PRIMO.\n", Numero);
        else printf("%d NAO eh primo.\n", Numero);

        goto INICIO;

    return 0;

}

// Implementação das operações (algoritmos) propriamente ditos

int ehprimo(int N) {

    if (N <= 1) return 0; // O return 0 indica que não é primo 

    int Contador = 0;
  
    for (int i = 2; i * i <= N; i++){
        Contador++;
        if(N % i == 0){
            printf("%d \t ", Contador);
            return 0; // O return 0 indica que N não é primo 
        }
    }

    printf("%d \t ", Contador);
    return 1; // O return 1 indica que o N é primo 
    
}