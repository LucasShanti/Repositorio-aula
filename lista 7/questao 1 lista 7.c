#include <stdio.h>

typedef struct {
    double real;
    double imag;
} complex;

complex criar_complex(double real, double imag) {
    complex c;
    c.real = real;
    c.imag = imag;
    return c;
}

void imprimir_complex(complex c) {
    if (c.imag == 0)
        printf("%.2lf\n", c.real);
    else if (c.real == 0)
        printf("%.2lfi\n", c.imag);
    else if (c.imag < 0)
        printf("%.2lf - %.2lfi\n", c.real, -c.imag);
    else
        printf("%.2lf + %.2lfi\n", c.real, c.imag);
}

complex soma_complex(complex x, complex y) {
    return criar_complex(x.real + y.real, x.imag + y.imag);
}

complex subtrai_complex(complex x, complex y) {
    return criar_complex(x.real - y.real, x.imag - y.imag);
}

complex multiplica_complex(complex x, complex y) {
    return criar_complex(x.real * y.real - x.imag * y.imag, x.real * y.imag + x.imag * y.real);
}

complex divide_complex(complex x, complex y) {
    double denom = y.real * y.real + y.imag * y.imag;
    return criar_complex((x.real * y.real + x.imag * y.imag) / denom, (x.imag * y.real - x.real * y.imag) / denom);
}

complex soma_real(complex x, double a) {
    return criar_complex(x.real + a, x.imag);
}

complex subtrai_real(complex x, double a) {
    return criar_complex(x.real - a, x.imag);
}

complex multiplica_real(complex x, double a) {
    return criar_complex(x.real * a, x.imag * a);
}

complex divide_real(complex x, double a) {
    return criar_complex(x.real / a, x.imag / a);
}

complex soma_real_esq(double a, complex x) {
    return criar_complex(a + x.real, x.imag);
}

complex subtrai_real_esq(double a, complex x) {
    return criar_complex(a - x.real, -x.imag);
}

complex multiplica_real_esq(double a, complex x) {
    return criar_complex(a * x.real, a * x.imag);
}

complex divide_real_esq(double a, complex x) {
    double denom = x.real * x.real + x.imag * x.imag;
    return criar_complex((a * x.real) / denom, (-a * x.imag) / denom);
}

int main() {
    double xr, xi, yr, yi, a;
    printf("Digite a parte real e imaginaria de X: ");
    scanf("%lf %lf", &xr, &xi);
    printf("Digite a parte real e imaginaria de Y: ");
    scanf("%lf %lf", &yr, &yi);
    printf("Digite um numero real A: ");
    scanf("%lf", &a);

    complex X = criar_complex(xr, xi);
    complex Y = criar_complex(yr, yi);

    printf("X = "); imprimir_complex(X);
    printf("Y = "); imprimir_complex(Y);
    printf("A = %.2lf\n", a);

    printf("\nOperacoes entre complexos:\n");
    printf("X + Y = "); imprimir_complex(soma_complex(X, Y));
    printf("X - Y = "); imprimir_complex(subtrai_complex(X, Y));
    printf("X * Y = "); imprimir_complex(multiplica_complex(X, Y));
    printf("X / Y = "); imprimir_complex(divide_complex(X, Y));

    printf("\nOperacoes entre complexo e real (complexo op real):\n");
    printf("X + A = "); imprimir_complex(soma_real(X, a));
    printf("X - A = "); imprimir_complex(subtrai_real(X, a));
    printf("X * A = "); imprimir_complex(multiplica_real(X, a));
    printf("X / A = "); imprimir_complex(divide_real(X, a));

    printf("\nOperacoes entre real e complexo (real op complexo):\n");
    printf("A + X = "); imprimir_complex(soma_real_esq(a, X));
    printf("A - X = "); imprimir_complex(subtrai_real_esq(a, X));
    printf("A * X = "); imprimir_complex(multiplica_real_esq(a, X));
    printf("A / X = "); imprimir_complex(divide_real_esq(a, X));

    return 0;
}