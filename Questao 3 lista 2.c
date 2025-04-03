#include <stdio.h>

double calcular_media(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

int main() {
    double nota1, nota2, nota3;
    printf("Digite três notas: ");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
    printf("Média das notas: %.2lf\n", calcular_media(nota1, nota2, nota3));
    return 0;
}