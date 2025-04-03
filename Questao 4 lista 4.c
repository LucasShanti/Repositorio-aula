#include <stdio.h>
#include <string.h>

void concatenar(char *dest, const char *str1, const char *str2) {
    strcpy(dest, str1);
    strcat(dest, str2);
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char resultado[100];

    concatenar(resultado, str1, str2);
    printf("string concatenada: %s\n", resultado);
    return 0;
}
