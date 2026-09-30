#include <stdio.h>

int main() {
    long long t1 = 1, t2 = 1, proximo;
    int i;

    printf("20 primeiros termos da serie de Fibonacci:\n");
    printf("%lld ", t1);
    printf("%lld ", t2);

    for (i = 3; i <= 20; i++) {
        proximo = t1 + t2;
        printf("%lld ", proximo);
        t1 = t2;
        t2 = proximo;
    }
    printf("\n");

    return 0;
}
