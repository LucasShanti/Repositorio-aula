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
    printf("Números perfeitos até 10000:\n");
    for (int i = 2; i <= 10000; i++) {
        if (eh_perfeito(i)) {
            printf("%d é perfeito\n", i);
        }
    }
    return 0;
}
