#include <stdio.h>
#include <ctype.h>

void para_minusculas(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

int main() {
    char str[100];
    printf("Digite uma string para converter para minúsculas: ");
    scanf("%s", str);
    para_minusculas(str);
    printf("String convertida: %s\n", str);
    return 0;
}
