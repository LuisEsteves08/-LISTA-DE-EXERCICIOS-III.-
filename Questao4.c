#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero == 0) {
        contador = 1; 
    } else {
        while (numero > 0) {
            numero = numero / 10; 
            contador++;            
        }
    }

    printf("O numero digitado tem %d digito(s)\n", contador);

    return 0;
}

