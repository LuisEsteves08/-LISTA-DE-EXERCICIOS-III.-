#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int i, contador = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; i < strlen(palavra); i++) {
        if (tolower(palavra[i]) == 'a') {
            contador++;
        }
    }

    printf("Quantidade de letras 'a': %d\n", contador);

    return 0;
}

