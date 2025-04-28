#include <stdio.h>
#include <stdlib.h>

float** criarMatrizFloat(int l, int c) {
    float** m = (float**)malloc(l * sizeof(float*));
    if (!m) return NULL;
    for (int i = 0; i < l; i++) {
        m[i] = (float*)malloc(c * sizeof(float));
        if (!m[i]) {
            for (int j = 0; j < i; j++) free(m[j]);
            free(m);
            return NULL;
        }
    }
    return m;
}

void liberarMatrizFloat(float** m, int l) {
    if (!m) return;
    for (int i = 0; i < l; i++) free(m[i]);
    free(m);
}

void lerMatrizFloat(float** m, int l, int c) {
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            scanf("%f", &m[i][j]);
}

void imprimirMatrizFloat(float** m, int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++)
            printf("%.2f ", m[i][j]);
        printf("\n");
    }
}

float** multiplicarMatrizes(float** a, float** b, int l1, int c1, int c2) {
    if (!a || !b) return NULL;
    float** r = criarMatrizFloat(l1, c2);
    if (!r) return NULL;
    for (int i = 0; i < l1; i++)
        for (int j = 0; j < c2; j++) {
            r[i][j] = 0;
            for (int k = 0; k < c1; k++)
                r[i][j] += a[i][k] * b[k][j];
        }
    return r;
}

int main() {
    int l1, c1, l2, c2;
    scanf("%d%d", &l1, &c1);
    scanf("%d%d", &l2, &c2);
    if (c1 != l2) {
        printf("Multiplicacao impossivel\n");
        return 1;
    }
    float** a = criarMatrizFloat(l1, c1);
    float** b = criarMatrizFloat(l2, c2);
    if (!a || !b) {
        printf("Erro de memoria\n");
        liberarMatrizFloat(a, l1);
        liberarMatrizFloat(b, l2);
        return 1;
    }
    lerMatrizFloat(a, l1, c1);
    lerMatrizFloat(b, l2, c2);
    float** r = multiplicarMatrizes(a, b, l1, c1, c2);
    if (!r) {
        printf("Erro na multiplicacao\n");
        liberarMatrizFloat(a, l1);
        liberarMatrizFloat(b, l2);
        return 1;
    }
    imprimirMatrizFloat(r, l1, c2);
    liberarMatrizFloat(a, l1);
    liberarMatrizFloat(b, l2);
    liberarMatrizFloat(r, l1);
    return 0;
}