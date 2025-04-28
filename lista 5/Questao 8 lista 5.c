#include <stdio.h>
#include <stdlib.h>

int existe(int* v, int tam, int val) {
    for (int i = 0; i < tam; i++) {
        if (v[i] == val) return 1;
    }
    return 0;
}

void diferenca(int* A, int t_a, int* B, int t_b, int** C, int* t_c) {
    *C = (int*)malloc(t_a * sizeof(int));
    *t_c = 0;

    for (int i = 0; i < t_a; i++) {
        if (!existe(B, t_b, A[i])) {
            (*C)[(*t_c)++] = A[i];
        }
    }
}

int main() {
    int A[] = {15, 1, 25, 10, 7, 8, 3};
    int B[] = {7, 13, 25, 8, 42};
    int *C, t_c;

    diferenca(A, 7, B, 5, &C, &t_c);

    for (int i = 0; i < t_c; i++) {
        printf("%d ", C[i]);
    }

    free(C);
    return 0;
}
