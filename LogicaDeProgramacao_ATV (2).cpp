#include <stdio.h>

int main() {
    int numero = 1;

    while (numero <= 15) {
        printf("%d = %d\n", numero, numero * numero);
        numero++;
    }

    return 0;
}

