#include <stdio.h>

void desenha_retangulo_preenchido(int linhas, int colunas, char contorno, char preenchimento) {
    for (int i = 0; i < linhas; i++) {
        for (int ii = 0; ii < colunas; ii++) {
            
            if (i == 0 || i == linhas - 1 || ii == 0 || ii == colunas - 1) {
                printf("%c", contorno);
            } else {
                printf("%c", preenchimento);
            }
        }
        printf("\n"); 
    }
}

int main() {
    int linhas, colunas;
    char contorno, preenchimento;

    
    printf("Digite a quantidade de linhas, colunas, contorno e o de preenchimento: ");
    scanf("%d %d %c %c", &linhas, &colunas, &contorno, &preenchimento);

    
    desenha_retangulo_preenchido(linhas, colunas, contorno, preenchimento);

    return 0;
}
