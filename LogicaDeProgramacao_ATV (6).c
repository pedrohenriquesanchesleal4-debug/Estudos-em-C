#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &valor1);
    printf("Digite o segundo numero: ");
    scanf("%d", &valor2);

    int soma = valor1 + valor2;
    int subtracao = valor1 - valor2;
    int multiplicacao = valor1 * valor2;

    printf("\nSoma = %d\n", soma);
    printf("Subtracao = %d\n", subtracao);
    printf("Multiplicacao = %d\n", multiplicacao);

    if (valor2 != 0) {
        int divisaoInteira = valor1 / valor2;
        int resto = valor1 % valor2;
        float divisaoReal = (float)valor1 / valor2;

        printf("Divisao inteira = %d\n", divisaoInteira);
        printf("Resto = %d\n", resto);
        printf("Divisao real = %.2f\n", divisaoReal);
    } else {
        printf("Nao e possivel dividir por zero\n");
    }

    return 0;
}
