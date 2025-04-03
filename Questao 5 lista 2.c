#include <stdio.h>
#include <math.h>

double log_base(double a, double b) {
    return log(a) / log(b);
}

int main() {
    double a, b;
    printf("Digite o número e a base do logaritmo: ");
    scanf("%lf %lf", &a, &b);
    if (a <= 0 || b <= 0 || b == 1) {
        printf("Erro: números inválidos para logaritmo.\n");
    } else {
        printf("Logaritmo de %.2lf na base %.2lf: %.4lf\n", a, b, log_base(a, b));
    }
    return 0;
}