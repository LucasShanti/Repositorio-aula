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

float** somarMatrizes(float** a, float** b, int l, int c) {
    if (!a || !b) return NULL;
    float** r = criarMatrizFloat(l, c);
    if (!r) return NULL;
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            r[i][j] = a[i][j] + b[i][j];
    return r;
}

int main() {
    int l, c;
    scanf("%d%d", &l, &c);
    float** a = criarMatrizFloat(l, c);
    float** b = criarMatrizFloat(l, c);
    if (!a || !b) {
        printf("Erro de memoria\n");
        liberarMatrizFloat(a, l);
        liberarMatrizFloat(b, l);
        return 1;
    }
    lerMatrizFloat(a, l, c);
    lerMatrizFloat(b, l, c);
    float** r = somarMatrizes(a, b, l, c);
    if (!r) {
        printf("Erro na soma\n");
        liberarMatrizFloat(a, l);
        liberarMatrizFloat(b, l);
        return 1;
    }
    imprimirMatrizFloat(r, l, c);
    liberarMatrizFloat(a, l);
    liberarMatrizFloat(b, l);
    liberarMatrizFloat(r, l);
    return 0;
}