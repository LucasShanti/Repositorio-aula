#include <stdio.h>

void intercalarOrdenados(int* A, int t_a, int* B, int t_b, int* C) {
    int i = 0, j = 0, k = 0;

    while (i < t_a && j < t_b) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < t_a) {
        C[k++] = A[i++];
    }

    while (j < t_b) {
        C[k++] = B[j++];
    }
}

int main() {
    int A[] = {15, 31, 35, 42, 57, 86, 86, 98, 99};
    int B[] = {18, 25, 30, 47, 52, 52, 75, 86, 91};
    int t_a = sizeof(A) / sizeof(A[0]);
    int t_b = sizeof(B) / sizeof(B[0]);
    int C[t_a + t_b];

    intercalarOrdenados(A, t_a, B, t_b, C);

    for (int i = 0; i < t_a + t_b; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
