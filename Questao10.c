#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, maior;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        maior = matriz[i][0];
        for (j = 1; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
        printf("Maior da linha %d: %d\n", i, maior);
    }

    return 0;
}

