#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char palavra[100];
    int vogais = 0, consoantes = 0;
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    
    for (i = 0; i < strlen(palavra); i++) {
        char letra = tolower(palavra[i]); 

        
        if (isalpha(letra)) {
           
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    printf("\nA palavra '%s' tem:\n", palavra);
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}

