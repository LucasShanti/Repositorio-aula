#include <stdio.h>


long long int fatorial(int x) {
    if (x == 0 || x == 1)
        return 1;
    else
        return x * fatorial(x - 1);
}


long long int combinacoes(int n, int p) {
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

int main() {
    int n = 5;
    int p = 3;
    printf("C(%d, %d) = %lld\n", n, p, combinacoes(n, p));  
    return 0;
}
