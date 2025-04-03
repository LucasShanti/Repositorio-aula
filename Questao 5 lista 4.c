#include <stdio.h>

int stringnumero(const char *str) {
    int numero = 0;
    int i = 0;

    while (str[i] != '\0') {
        
        numero = numero * 10 + (str[i] - '0');
        i++;
    }
    
    return numero;
}

int main() {
    char str[] = "12345";
    int resultado = stringnumero(str);
    printf("numero convertido: %d\n", resultado);
    return 0;
}
