#include <stdio.h>

int main() {
    float n1, n2;
    printf("Digite o primeiro numero real: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &n2);

    printf("Adicao: %.2f\n", n1 + n2);
    printf("Subtracao: %.2f\n", n1 - n2);
    printf("Multiplicacao: %.2f\n", n1 * n2);
    if (n2 != 0) {
        printf("Divisao: %.2f\n", n1 / n2);
    } else {
        printf("Divisao por zero nao e permitida.\n");
    }

    return 0;
}
