#include <stdio.h>

int main() {
    int numeros[10];
    int i, j, cont;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero (0 a 9): ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nFrequencia de cada numero:\n");
    for (i = 0; i < 10; i++) {
        cont = 0;
        for (j = 0; j <= i; j++) {
            if (numeros[i] == numeros[j]) {
                cont++;
            }
        }
        if (cont == 1) {
            int freq = 0;
            for (j = 0; j < 10; j++) {
                if (numeros[i] == numeros[j]) {
                    freq++;
                }
            }
            printf("%d apareceu %d vez(es)\n", numeros[i], freq);
        }
    }

    return 0;
}

