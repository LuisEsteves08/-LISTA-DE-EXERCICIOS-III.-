#include <stdio.h>

int main() {
    int numeros[8];
    int i, j, temp;

    for (i = 0; i < 8; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 8 - 1; i++) {
        for (j = i + 1; j < 8; j++) {
            if (numeros[i] < numeros[j]) {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("\nNumeros em ordem decrescente:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");
    return 0;
}

