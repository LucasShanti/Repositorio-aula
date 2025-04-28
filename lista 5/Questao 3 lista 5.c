#include <stdio.h>

int indiceMaiorElemento(int* v, int t_v) {
    int indice = 0;
    for (int i = 1; i < t_v; i++) {
        if (v[i] > v[indice]) {
            indice = i;
        }
    }
    return indice;
}

int main() {
    int v[] = {4, 1, 9, 2, 6};
    int t_v = 5;

    printf("Índice do maior: %d\n", indiceMaiorElemento(v, t_v));
    return 0;
}
