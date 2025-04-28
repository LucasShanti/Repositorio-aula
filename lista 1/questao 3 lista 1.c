#include <stdio.h>


void desenha_retangulo_solido() {
    int linha,coluna;
    char caracter;
    scanf("%d %d %c",&linha,&coluna,&caracter);//ler as linha as colunas e o caracter desejado
    for (int i = 0; i < linha; i++) {
        for(int ii = 0; ii < coluna;ii++) {
            printf("%c",caracter);
        }
        printf("\n");
    }
}

int main() {
    desenha_retangulo_solido();
    

    return 0;
}
