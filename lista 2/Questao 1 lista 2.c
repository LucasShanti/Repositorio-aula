#include <stdio.h>
#include <math.h>

double calcular_area(double R) {
    return M_PI * R * R;
}

int main() {
    
    double R;
    printf("Digite o raio do círculo: ");
    scanf("%lf", &R);
    printf("Área do círculo: %.2lf\n", calcular_area(R));
    
    return 0;
}