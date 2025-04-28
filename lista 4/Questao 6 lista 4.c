#include <stdio.h>
#include <ctype.h>

void alternar(char *str) {
    while (*str) {
        if (isupper(*str))
            *str = tolower(*str);
        else if (islower(*str))
            *str = toupper(*str);
        str++;
    }
}

int main() {
    char str[] = "FLAmeNGo!";
    alternar(str);
    printf("string alterada: %s\n", str);
    return 0;
}
