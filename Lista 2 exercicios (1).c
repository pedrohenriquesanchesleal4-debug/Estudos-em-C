#include <stdio.h>

int main() {
    float salario_atual, percentual_reajuste, novo_salario;
    printf("Digite o salario atual: ");
    scanf("%f", &salario_atual);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual_reajuste);

    novo_salario = salario_atual * (1.0f + (percentual_reajuste / 100.0f));

    printf("Novo salario: %.2f\n", novo_salario);

    return 0;
}
