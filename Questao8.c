#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior, menor, posMaior, posMenor;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];
    posMaior = posMenor = 0;

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            posMaior = i;
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
            posMenor = i;
        }
    }

    printf("\nMaior valor: %d na posicao %d\n", maior, posMaior);
    printf("Menor valor: %d na posicao %d\n", menor, posMenor);

    return 0;
}

