#include <stdio.h>

const char* nome_mes(int numero) {
    const char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    if (numero < 1 || numero > 12) {
        return "Erro: número inválido";
    }
    return meses[numero - 1];
}

int main() {
    int numero;
    printf("Digite um número de 1 a 12: ");
    scanf("%d", &numero);
    printf("Mês correspondente: %s\n", nome_mes(numero));
    return 0;
}
