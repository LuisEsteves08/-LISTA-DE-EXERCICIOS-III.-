#include <stdio.h>

int main() {
    int n, i;
    int somaPares = 0, somaImpares = 0;

    printf("Quantos numeros deseja digitar ");
    scanf("%d", &n);

    int numeros[n];

  
    for (i = 0; i < n; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    printf("\nNumeros digitados: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);

        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
        } else {
            somaImpares += numeros[i];
        }
    }

    printf("\n\nSoma dos numeros pares: %d", somaPares);
    printf("\nSoma dos numeros impares: %d\n", somaImpares);

    return 0;
}

