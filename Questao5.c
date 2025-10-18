#include <stdio.h>

int main() {
    int numero, invertido = 0, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        resto = numero % 10;             
        invertido = invertido * 10 + resto; 
        numero = numero / 10;           
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}

