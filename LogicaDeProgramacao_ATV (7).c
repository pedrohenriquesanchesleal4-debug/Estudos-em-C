#include <stdio.h>

int main() {
    int valor1 = 5, valor2 = 5;
    int resultado1, resultado2;

    printf("Valor de valor1 = %d\n", valor1);
    resultado1 = valor1++;
    printf("resultado1 = valor1++ -> resultado1 = %d, valor1 = %d\n\n", resultado1, valor1);

    printf("Valor de valor2 = %d\n", valor2);
    resultado2 = ++valor2;
    printf("resultado2 = ++valor2 -> resultado2 = %d, valor2 = %d\n\n", resultado2, valor2);

    int valor3 = 3;
    printf("valor3-- imprime %d\n", valor3--);
    printf("valor3 agora = %d\n\n", valor3);

    int valor4 = 3;
    printf("--valor4 imprime %d\n", --valor4);
    printf("valor4 agora = %d\n", valor4);

    return 0;
}
