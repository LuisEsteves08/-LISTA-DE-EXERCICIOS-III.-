#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[50], unicos[50];
    int i, j, k = 0, repetido;

    srand(time(NULL));

    for (i = 0; i < 50; i++) {
        vetor[i] = rand() % 21;
    }

    printf("Vetor original:\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }

    for (i = 0; i < 50; i++) {
        repetido = 0;
        for (j = 0; j < k; j++) {
            if (vetor[i] == unicos[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            unicos[k] = vetor[i];
            k++;
        }
    }

    printf("\n\nVetor de numeros unicos:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unicos[i]);
    }

    printf("\n");
    return 0;
}

