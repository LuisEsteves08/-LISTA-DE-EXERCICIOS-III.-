#include <stdio.h>

int main() {
    int v1[5], v2[5];
    int i, resultado = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %d elemento do vetor 1: ", i + 1);
        scanf("%d", &v1[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("Digite o %d elemento do vetor 2: ", i + 1);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < 5; i++) {
        resultado += v1[i] * v2[i];
    }

    printf("Produto escalar: %d\n", resultado);

    return 0;
}

