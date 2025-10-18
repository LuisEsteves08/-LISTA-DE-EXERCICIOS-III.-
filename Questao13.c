#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, soma, maiorSoma = 0, linhaMaior = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        soma = 0;
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
        if (i == 0 || soma > maiorSoma) {
            maiorSoma = soma;
            linhaMaior = i;
        }
    }

    printf("Linha com maior soma: %d\n", linhaMaior);

    return 0;
}

