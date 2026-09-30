#include <stdio.h>

int main() {
    float valor1, valor2, valor3, valor4;
    float soma = 0;

    printf("Digite a nota 1: ");
    scanf("%f", &valor1);
    soma += valor1;

    printf("Digite a nota 2: ");
    scanf("%f", &valor2);
    soma += valor2;

    printf("Digite a nota 3: ");
    scanf("%f", &valor3);
    soma += valor3;

    printf("Digite a nota 4: ");
    scanf("%f", &valor4);
    soma += valor4;

    float media = soma / 4;

    printf("\nSoma = %.2f\n", soma);
    printf("Media = %.2f\n", media);

    return 0;
}
