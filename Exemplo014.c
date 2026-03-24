#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE * in = fopen("carrinho.csv", "r");
    if (in == NULL) {
        printf("ERRO: não foi possível abrir o arquivo para leitura");
        exit(1);
    }

    char Buffer[1000];
    fscanf(in, "%[^\n]\n", Buffer);

    char Produto[100];
    int Quantidade;
    float Preco;

    int i = 1;
    float Total = 0.0;

    while (fscanf(in, "%[^,],%d,%f\n", Produto, &Quantidade, &Preco) == 3) {
        float SubTotal = Quantidade * Preco;
        Total = Total + SubTotal;
        printf("%d) %s: %d * %.2f = %.2f\n", i, Produto, Quantidade, Preco, SubTotal);
        i++;
    }

    printf("\n O valor total da compra eh R$ %.2f\n", Total);
    
    fclose(in);
    return 0;
}