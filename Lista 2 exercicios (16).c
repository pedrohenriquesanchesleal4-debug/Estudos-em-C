#include <stdio.h>

int main() {
    float valor_produto, percentual_desconto, valor_desconto, valor_final;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentual_desconto);

    valor_desconto = valor_produto * (percentual_desconto / 100.0f);
    valor_final = valor_produto - valor_desconto;

    printf("Valor do desconto: %.2f\n", valor_desconto);
    printf("Valor do produto com desconto: %.2f\n", valor_final);

    return 0;
}
