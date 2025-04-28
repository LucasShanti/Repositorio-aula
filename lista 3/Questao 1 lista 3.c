#include <stdio.h>
#include <ctype.h>
#include <string.h>

int eh_consoante(char c) {
    c = tolower(c);
    return (c >= 'a' && c <= 'z' && !strchr("aeiou", c)) ? 1 : 0;
}

int main() {
    char c;
    printf("Digite um caractere para verificar se é consoante: ");
    scanf(" %c", &c);
    printf("Resultado: %d\n", eh_consoante(c));
    return 0;
}
