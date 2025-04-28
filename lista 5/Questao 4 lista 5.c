#include <stdio.h>

float mediaVetor(int* v, int t_v) {
    int soma = 0;
    for (int i = 0; i < t_v; i++) {
        soma += v[i];
    }
    return (float)soma / t_v;
}

int main() {
    int v[] = {4, 1, 9, 2, 6};
    int t_v = 5;

    printf("Média: %.2f\n", mediaVetor(v, t_v));
    return 0;
}
