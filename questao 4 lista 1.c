#include <stdio.h>

void desenha_retangulo(int linhas, int colunas, char caracter) {
    for (int i = 0; i < linhas; i++) {
        for (int ii = 0; ii < colunas; ii++) {
            
            if (i == 0 || i == linhas - 1 || ii == 0 || ii == colunas - 1) {
                printf("%c", caracter);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;
    char caracter;

    
    printf("digite as linhas colunas e caracter desejado: ");
    scanf("%d %d %c", &linhas, &colunas, &caracter);

    desenha_retangulo(linhas, colunas, caracter);

    return 0;
}
