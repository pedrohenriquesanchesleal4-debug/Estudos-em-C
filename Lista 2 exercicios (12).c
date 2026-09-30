#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite o primeiro numero real: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &num2);

    printf("Adicao: %.2f\n", num1 + num2);
    printf("Subtracao: %.2f\n", num1 - num2);
    printf("Multiplicacao: %.2f\n", num1 * num2);
    if (num2 != 0) {
        printf("Divisao: %.2f\n", num1 / num2);
    } else {
        printf("Divisao por zero nao e permitida.\n");
    }

    return 0;
}
