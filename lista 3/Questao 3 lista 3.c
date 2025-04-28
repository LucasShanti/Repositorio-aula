#include <stdio.h>
#include <string.h>

int eh_palindromo(const char *str) {
    int esquerda = 0, direita = strlen(str) - 1;
    while (esquerda < direita) {
        if (str[esquerda] != str[direita]) return 0;
        esquerda++;
        direita--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Digite uma palavra para verificar se é palíndromo: ");
    scanf("%s", str);
    printf("Resultado: %d\n", eh_palindromo(str));
    return 0;
}
