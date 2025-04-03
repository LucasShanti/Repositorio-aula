#include <stdio.h>

int eh_perfeito(int num) {
    int soma = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma == num;
}

int main() {
    int num;
    printf("Digite um número para verificar se é perfeito: ");
    scanf("%d", &num);
    printf("Resultado: %d\n", eh_perfeito(num));
    return 0;
}
