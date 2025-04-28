#include <stdio.h>
#include <stdlib.h>

void interseccao(int* A, int t_a, int* B, int t_b, int** C, int* t_c) {
    *C = (int*)malloc((t_a < t_b ? t_a : t_b) * sizeof(int));
    *t_c = 0;

    for (int i = 0; i < t_a; i++) {
        for (int j = 0; j < t_b; j++) {
            if (A[i] == B[j]) {
                int ja_existe = 0;
                for (int k = 0; k < *t_c; k++) {
                    if ((*C)[k] == A[i]) {
                        ja_existe = 1;
                        break;
                    }
                }
                if (!ja_existe) {
                    (*C)[*t_c] = A[i];
                    (*t_c)++;
                }
            }
        }
    }
}

int main() {
    int A[] = {15, 1, 25, 10, 7, 8, 3};
    int B[] = {7, 13, 25, 8, 42};
    int *C, t_c;

    interseccao(A, 7, B, 5, &C, &t_c);

    for (int i = 0; i < t_c; i++) {
        printf("%d ", C[i]);
    }

    free(C);
    return 0;
}
