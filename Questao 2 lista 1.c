#include <stdio.h>


void linha2 (char c) {
    for (int i = 0; i < 25; i++) {
        printf("%c", c);
    }
    printf("\n");
}

int main() {
    linha2('*'); 
    printf("CMP 1048\n");
    linha2('@');
    printf("Técnicas de Programação\n");
    linha2('+');

    return 0;
}
