#include <stdio.h>

int buscarElemento(int* v, int t_v, int x) {
    for (int i = 0; i < t_v; i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int v[] = {4, 1, 9, 2, 6};
    int t_v = 5;
    int x = 2;

    printf("Índice de %d: %d\n", x, buscarElemento(v, t_v, x));
    return 0;
}
