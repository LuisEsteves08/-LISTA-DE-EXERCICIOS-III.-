#include <stdio.h>

int main() {
    int num1, num2;
    int i;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("\nNumeros inteiros entre %d e %d:\n", num1, num2);

    for (i = num1 + 1; i < num2; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

