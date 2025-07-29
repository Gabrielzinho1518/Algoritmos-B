#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i;

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    printf("Vogais na palavra:\n");

    for (i = 0; i < strlen(palavra); i++) {
        char letra = palavra[i];
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            printf("%c ", letra);
        }
    }

    printf("\n");
    return 0;
}
