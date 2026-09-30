#include <stdio.h>

int main() {
    int idade;
    int menor21 = 0, maior50 = 0;

    printf("Digite as idades (digite um numero negativo para encerrar):\n");
    while (1) {
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        if (idade < 21) {
            menor21++;
        } else if (idade > 50) {
            maior50++;
        }
    }

    printf("Total de pessoas com menos de 21 anos: %d\n", menor21);
    printf("Total de pessoas com mais de 50 anos: %d\n", maior50);

    return 0;
}
