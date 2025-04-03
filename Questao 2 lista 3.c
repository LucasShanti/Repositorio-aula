#include <stdio.h>
#include <ctype.h>
#include <string.h>

int eh_vogal_minuscula(char c) {
    return (c >= 'a' && c <= 'z' && strchr("aeiou", c)) ? 1 : 0;
}

int main() {
    char c;
    printf("Digite um caractere para verificar se é uma vogal minúscula: ");
    scanf(" %c", &c);
    printf("Resultado: %d\n", eh_vogal_minuscula(c));
    return 0;
}
