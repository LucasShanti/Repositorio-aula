#include <stdio.h>

void remover(char *str) {
    int inicio = 0, fim = 0;

    
    while (str[inicio] == ' ' || str[inicio] == '\t' || str[inicio] == '\n') {
        inicio++;
    }

    
    fim = inicio;
    while (str[fim] != '\0') {
        fim++;
    }
    
    fim--;
    while (fim > inicio && (str[fim] == ' ' || str[fim] == '\t' || str[fim] == '\n')) {
        fim--;
    }

    
    int i, j = 0;
    for (i = inicio; i <= fim; i++) {
        str[j++] = str[i];
    }
    str[j] = '\0';
}

int main() {
    char str[] = "   abc def  ghij  klmno   ";
    remover(str);
    printf("string alterada: \"%s\"\n", str);
    return 0;
}
