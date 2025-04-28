#include <stdio.h>

int contar(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[] = "Lucas Ama Codigo";
    printf("Quantidade de caracteres: %d\n", contar(str));
    return 0;
}
