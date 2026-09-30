#include <stdio.h>

int main() {
    float base, altura;
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    printf("Perimetro (base + altura): %.2f\n", base + altura);
    printf("Area (base * altura): %.2f\n", base * altura);

    return 0;
}
