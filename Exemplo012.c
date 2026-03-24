#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE * in = fopen("dados.csv", "r");
    if (in == NULL) {
        printf("ERRO: não foi possível abrir o arquivo para leitura");
        exit(1);
    }

    char Buffer[10000];
    fscanf(in, "%[^\n]\n", Buffer);

    printf("%s\n", Buffer);

    int Contador = 0;

    while (fscanf(in, "%[^\n]\n", Buffer) == 1) {
        
        Contador = Contador + 1;
        
    }

    printf("Quantidade de idades: %d ", Contador);
    
    fclose(in);
    return 0;
}