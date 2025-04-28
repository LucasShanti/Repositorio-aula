#include <stdio.h>
#include <stdlib.h>

int** criarMatriz(int linhas, int colunas) {
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL) return NULL;
    
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return NULL;
        }
    }
    return matriz;
}

void liberarMatriz(int** matriz, int linhas) {
    if (matriz == NULL) return;
    
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void lerMatriz(int** matriz, int linhas, int colunas) {
    printf("Digite os valores da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int** matriz, int linhas, int colunas) {
    printf("\nMatriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;
    
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    
    int** matriz = criarMatriz(linhas, colunas);
    if (matriz == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }
    
    lerMatriz(matriz, linhas, colunas);
    
    imprimirMatriz(matriz, linhas, colunas);
    
    liberarMatriz(matriz, linhas);
    
    return 0;
}