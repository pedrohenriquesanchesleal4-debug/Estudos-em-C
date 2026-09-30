#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fatorial;

    while (1) {
        printf("Digite um numero inteiro (menor que 1 para encerrar): ");
        scanf("%d", &num);

        if (num < 1) {
            break;
        }

        fatorial = 1;
        for (i = 1; i <= num; i++) {
            fatorial *= i;
        }

        printf("Fatorial de %d = %llu\n", num, fatorial);
    }

    return 0;
}
