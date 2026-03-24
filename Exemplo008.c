#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    FILE * fp = fopen("tabuada.txt", "w");

    if(fp == NULL) {
        printf("ERRO: ponteiro de arquivo não inicializado!\n");
        exit(1);
    }

    for (int i = 1; i <= 10; i++) 
        fprintf(fp, "7  *  %d  =  %d\n", i, 7 * i);
    
    fclose(fp);
    
    return 0;

}