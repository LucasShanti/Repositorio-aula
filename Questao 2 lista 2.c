#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

double calcular_volume(double R) {
    return (4.0 / 3.0) * M_PI * pow(R, 3);
}

int main() {
    
    double R;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &R);
    printf("Volume da esfera: %.2lf\n", calcular_volume(R));
    
    return 0;
}
