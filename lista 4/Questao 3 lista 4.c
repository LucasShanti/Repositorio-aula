#include <stdio.h>
#include <string.h>

int comparar(const char *str1, const char *str2) {
    int resultado = strcmp(str1, str2);

    if (resultado < 0)
        return -1;
    else if (resultado > 0)
        return 1;
    else
        return 0;
}

int main() {
    char str1[] = "macaco";
    char str2[] = "mania";

    printf("comparação: %d\n", comparar(str1, str2));

    return 0;
}
