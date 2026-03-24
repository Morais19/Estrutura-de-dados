#ifndef EQUIPE_H
#define EQUIPE_H

typedef struct {

    int Posicao;
    char Estado[32];
    char Time[32];
    int Pontos;
    int J;
    int V;
    int E;
    int D;
    int GP;
    int GC;
    int SG;
    float Aproveitamento;

}Equipe;

Equipe * lerDados(char * Arquivo);

//Pos;Estado;Equipe;Pts;J;V;E;D;GP;GC;SG
//1;Rio de Janeiro;Botafogo (C);79;38;23;10;5;59;29;+30
#endif