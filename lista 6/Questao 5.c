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

int** submatriz(int** A, int l, int c, int l2, int c2, int L2, int C2) {
    if (!A) return NULL;
    if (l2 < 0 || c2 < 0 || l2 + L2 > l || c2 + C2 > c) return NULL;
    int** sub = criarMatriz(L2, C2);
    if (!sub) return NULL;
    for (int i = 0; i < L2; i++)
        for (int j = 0; j < C2; j++)
            sub[i][j] = A[l2 + i][c2 + j];
    return sub;
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
    int l2, c2, L2, C2;
    scanf("%d%d%d%d", &l2, &c2, &L2, &C2);
    int** sub = submatriz(A, l, c, l2, c2, L2, C2);
    if (!sub) {
        printf("Submatriz invalida\n");
        liberarMatriz(A, l);
        return 1;
    }
    imprimirMatriz(sub, L2, C2);
    liberarMatriz(A, l);
    liberarMatriz(sub, L2);
    return 0;
}