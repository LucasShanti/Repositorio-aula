#include <stdio.h>
#include <stdlib.h>

int** criarMatriz(int l, int c) {
    int** m = (int**)malloc(l * sizeof(int*));
    if (!m) return NULL;
    for (int i = 0; i < l; i++) {
        m[i] = (int*)malloc(c * sizeof(int));
        if (!m[i]) {
            for (int j = 0; j < i; j++) free(m[j]);
            free(m);
            return NULL;
        }
    }
    return m;
}

void liberarMatriz(int** m, int l) {
    if (!m) return;
    for (int i = 0; i < l; i++) free(m[i]);
    free(m);
}

void lerMatriz(int** m, int l, int c) {
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
}

void imprimirMatriz(int** m, int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int** redimensionarMatriz(int** matriz, int linhas_orig, int colunas_orig, int novas_linhas, int novas_colunas) {
    int** nova = (int**)malloc(novas_linhas * sizeof(int*));
    if (!nova) return NULL;
    for (int i = 0; i < novas_linhas; i++) {
        nova[i] = (int*)malloc(novas_colunas * sizeof(int));
        if (!nova[i]) {
            for (int j = 0; j < i; j++) free(nova[j]);
            free(nova);
            return NULL;
        }
        for (int j = 0; j < novas_colunas; j++) {
            if (i < linhas_orig && j < colunas_orig)
                nova[i][j] = matriz[i][j];
            else
                nova[i][j] = 0;
        }
    }
    return nova;
}

int main() {
    int l, c;
    scanf("%d%d", &l, &c);
    int** A = criarMatriz(l, c);
    if (!A) {
        printf("Erro de memoria\n");
        return 1;
    }
    lerMatriz(A, l, c);
    int nl, nc;
    scanf("%d%d", &nl, &nc);
    int** nova = redimensionarMatriz(A, l, c, nl, nc);
    if (!nova) {
        printf("Erro ao redimensionar\n");
        liberarMatriz(A, l);
        return 1;
    }
    imprimirMatriz(nova, nl, nc);
    liberarMatriz(A, l);
    liberarMatriz(nova, nl);
    return 0;
}