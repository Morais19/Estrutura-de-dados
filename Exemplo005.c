#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    FILE * Arq;

    Arq = fopen("arquivo.txt", "w");

    fclose(Arq);
    
    return 0;

}