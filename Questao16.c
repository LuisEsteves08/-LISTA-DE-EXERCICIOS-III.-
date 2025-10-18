#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int somaLinha, somaColuna, somaDiag1 = 0, somaDiag2 = 0;
    int magico = 1;
    int somaReferencia;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    somaReferencia = matriz[0][0] + matriz[0][1] + matriz[0][2];

    for (i = 0; i < 3; i++) {
        somaLinha = 0;
        somaColuna = 0;
        for (j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        if (somaLinha != somaReferencia || somaColuna != somaReferencia) {
            magico = 0;
            break;
        }
    }

    for (i = 0; i < 3; i++) {
        somaDiag1 += matriz[i][i];
        somaDiag2 += matriz[i][2 - i];
    }

    if (somaDiag1 != somaReferencia || somaDiag2 != somaReferencia) {
        magico = 0;
    }

    if (magico) {
        printf("A matriz e um quadrado magico\n");
    } else {
        printf("A matriz nao e um quadrado magico\n");
    }

    return 0;
}

