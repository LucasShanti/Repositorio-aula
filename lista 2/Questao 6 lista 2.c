#include <stdio.h>

long long fatorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fatorial(n - 1);
}

int main() {
    int numero;
    printf("Digite um número inteiro para calcular o fatorial: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Erro: fatorial não definido para números negativos.\n");
    } else {
        printf("Fatorial de %d: %lld\n", numero, fatorial(numero));
    }
    return 0;
}