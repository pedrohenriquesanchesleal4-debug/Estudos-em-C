#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite o primeiro numero real: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &num2);
    printf("Numeros digitados: %.2f e %.2f\n", num1, num2);
    return 0;
}
