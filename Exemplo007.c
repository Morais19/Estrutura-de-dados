#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    FILE * fp = fopen("bd.txt", "a"); // Abrir bt.txt para ACRESCENTAR

    if(fp == NULL) {
        printf("ERRO: ponteiro de arquivo não inicializado!\n");
        exit(1);
    }

    int Numero = 1234;
    char Frase[] = "Gol..!";
    
    fprintf(fp, "%d\t\t", Numero);
    fprintf(fp, "%s", Frase);

    fclose(fp);
    
    return 0;

}