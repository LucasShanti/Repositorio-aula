#include <stdio.h>
#include <stdlib.h>

void criarVetor(int** v, int t_v) {
    *v = (int*)malloc(t_v * sizeof(int));
    for (int i = 0; i < t_v; i++) {
        (*v)[i] = 0;
    }
}

void liberarVetor(int** v) {
    free(*v);
    *v = NULL;
}

void lerVetor(int* v, int t_v) {
    for (int i = 0; i < t_v; i++) {
        scanf("%d", &v[i]);
    }
}

void imprimirVetor(int* v, int t_v) {
    for (int i = 0; i < t_v; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void redimensionarVetor(int** v, int t_v, int T) {
    int* novo = (int*)malloc(T * sizeof(int));
    int limite = t_v < T ? t_v : T;
    for (int i = 0; i < limite; i++) {
        novo[i] = (*v)[i];
    }
    free(*v);
    *v = novo;
}

int main() {
    int* vetor;
    int tamanho = 5;

    criarVetor(&vetor, tamanho);
    printf("vetor criado com zeros:\n");
    imprimirVetor(vetor, tamanho);

    printf("digite %d valores para o vetor:\n", tamanho);
    lerVetor(vetor, tamanho);

    printf("vetor após leitura:\n");
    imprimirVetor(vetor, tamanho);

    int novo_tamanho = 7;
    redimensionarVetor(&vetor, tamanho, novo_tamanho);
    printf("vetor após redimensionamento para %d posições:\n", novo_tamanho);
    imprimirVetor(vetor, novo_tamanho);

    liberarVetor(&vetor);
    printf("vetor liberado.\n");

    return 0;
}
