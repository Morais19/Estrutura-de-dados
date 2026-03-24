// Definindo os dados do Tipo Abstrato de Dados (TAD) fração

#ifndef FRACAO_H
#define FRACAO_H

typedef struct {
    int Numerador;
    int Denominador;
} Fracao;

// Definindo as OPERAÇÕES do Tipo Abstrato de Dados (TAD) fração

Fracao criarFracao(int N, int D);
Fracao simplificarFracao(Fracao F);
void exibirFracao(Fracao F);

#endif