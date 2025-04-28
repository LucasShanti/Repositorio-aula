#include <stdio.h>
#include <string.h>

void caixa_com_texto_centralizado(char *S, int N, char C) {
    if (N < 3) {
        printf("Erro: A largura da caixa deve ser pelo menos 3.\n");
        return;
    }

    int texto_len = strlen(S);
    int espaco_interno = N - 2;
    if (texto_len > espaco_interno) {
        S[espaco_interno] = '\0'; // Truncar o texto para caber
        texto_len = espaco_interno;
    }

    int espaco_esquerdo = (espaco_interno - texto_len) / 2;
    int espaco_direito = espaco_interno - texto_len - espaco_esquerdo;

    
    for (int i = 0; i < N; i++) {
        putchar(C);
    }
    putchar('\n');

    
    putchar(C);
    for (int i = 0; i < espaco_esquerdo; i++) {
        putchar(' ');
    }
    printf("%s", S);
    for (int i = 0; i < espaco_direito; i++) {
        putchar(' ');
    }
    putchar(C);
    putchar('\n');

    
    for (int i = 0; i < N; i++) {
        putchar(C);
    }
    putchar('\n');
}

int main() {
    char texto[] = "Ola Mundo!";
    int largura = 30;
    char caractere = '+';

    caixa_com_texto_centralizado(texto, largura, caractere);

    return 0;
}
