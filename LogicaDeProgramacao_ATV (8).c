#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite valor1: ");
    scanf("%d", &valor1);
    printf("Digite valor2: ");
    scanf("%d", &valor2);

    printf("\nvalor1 == valor2: %d\n", valor1 == valor2);
    printf("valor1 != valor2: %d\n", valor1 != valor2);
    printf("valor1 > valor2: %d\n", valor1 > valor2);
    printf("valor1 < valor2: %d\n", valor1 < valor2);
    printf("valor1 >= valor2: %d\n", valor1 >= valor2);
    printf("valor1 <= valor2: %d\n", valor1 <= valor2);

    return 0;
}
