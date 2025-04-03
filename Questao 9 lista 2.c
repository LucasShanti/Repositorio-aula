#include <stdio.h>

int eh_regular(int n) {
    if (n <= 0) {
        return 0;  
    }

    
    while (n % 2 == 0) {
        n /= 2;
    }

    while (n % 3 == 0) {
        n /= 3;
    }

    while (n % 5 == 0) {
        n /= 5;
    }

    
    return (n == 1) ? 1 : 0;
}

int main() {
    
    printf("%d\n", eh_regular(30));  
    printf("%d\n", eh_regular(14));  

    return 0;
}
