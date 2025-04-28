#include <stdio.h>
#include <stdlib.h>

int existe(int* v, int tam, int val) {
    for (int i = 0; i < tam; i++) {
        if (v[i] == val) return 1;
    }
    return 0;
}

void removerRepetidos(int* v, int t_v, int** novo, int* t_novo) {
    *novo = (int*)malloc(t_v * sizeof(int));
    *t_novo = 0;

    for (int i = 0; i < t_v; i++) {
        if (!existe(*novo, *t_novo, v[i])) {
            (*novo)[(*t_novo)++] = v[i];
        }
    }
}

int main() {
    int v[] = {18, 31, 11, 14, 25, 22, 64, 13, 81, 13, 25, 64, 45};
    int t_v = sizeof(v) / sizeof(v[0]);
    int *novo, t_novo;

    removerRepetidos(v, t_v, &novo, &t_novo);

    for (int i = 0; i < t_novo; i++) {
        printf("%d ", novo[i]);
    }

    free(novo);
    return 0;
}
