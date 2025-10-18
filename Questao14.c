#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, soma = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        soma += matriz[i][i];
    }

    printf("Soma da diagonal: %d\n", soma);

    return 0;
}

