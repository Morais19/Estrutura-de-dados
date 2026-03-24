#include <stdio.h>
#include <stdlib.h>

#include "equipe.h"

//Implementação das FUNCÕES

Equipe * lerDados(char * Arquivo) {
    
    FILE * fp = fopen(Arquivo, "r");

    if (fp == NULL) {
        
        printf("ERRO: Nao foi possivel fazer a abertura do arquivo!\n");
        exit (1);
    }

    Equipe * V = malloc(20 * sizeof(Equipe));

    if(V == NULL) {
        printf("ERRO: Nao foi possivel alocar memoria para o vetor de Equipes!\n");
        exit(1);
    }

    char Buffer [1000];
    fscanf(fp, "%[^\n]\n", Buffer);

    int i = 0; //indice do vetor


    while (fscanf(fp, "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d\n",
        &V[i].Posicao,
        V[i].Estado,
        V[i].Time,
        &V[i].Pontos,
        &V[i].J,
        &V[i].V,
        &V[i].E,
        &V[i].D,
        &V[i].GP,
        &V[i].GC,
        &V[i].SG) == 11) {
            
            V[i].Aproveitamento = 100.0 * V[i].Pontos / (3.0 *  V[i].J);
            i++;
    }

    fclose(fp);
    return V;
}