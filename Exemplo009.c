#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    FILE * fp = fopen("bd.txt", "r");

    if(fp == NULL) {
        printf("ERRO: ponteiro de arquivo não inicializado!\n");
        exit(1);
    }

    int Numero;
    char Nome[100];

    fscanf(fp, "%d %s", &Numero, Nome);
    printf("%d \t \t %s \n", Numero, Nome);

    fscanf(fp, "%d %s", &Numero, Nome);
    printf("%d \t \t %s \n", Numero, Nome);

    fscanf(fp, "%d %[^\n]", &Numero, Nome);
    printf("%d \t \t %s \n", Numero, Nome);
    
    fclose(fp);
    
    return 0;

}