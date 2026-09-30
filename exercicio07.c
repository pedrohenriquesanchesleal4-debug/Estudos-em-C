#include <stdio.h>

int main() {
    float prestacao_vencida, taxa_juros, juros, valor_total;
    int periodo_atraso;

    printf("Digite o valor da prestacao vencida: ");
    scanf("%f", &prestacao_vencida);
    printf("Digite a taxa de juros (%% ao periodo): ");
    scanf("%f", &taxa_juros);
    printf("Digite o periodo de atraso: ");
    scanf("%d", &periodo_atraso);

    juros = prestacao_vencida * (taxa_juros / 100.0f) * periodo_atraso;
    valor_total = prestacao_vencida + juros;

    printf("\nValor da prestacao atrasada: R$ %.2f\n", prestacao_vencida);
    printf("Periodo de atraso: %d\n", periodo_atraso);
    printf("Juros cobrados: R$ %.2f\n", juros);
    printf("Valor total com juros: R$ %.2f\n", valor_total);

    return 0;
}
