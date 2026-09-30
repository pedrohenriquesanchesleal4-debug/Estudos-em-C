#include <stdio.h>

int main() {
    float salario, percentual, novo_salario;
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual);

    novo_salario = salario * (1.0f + (percentual / 100.0f));
    printf("Novo salario: %.2f\n", novo_salario);

    return 0;
}
