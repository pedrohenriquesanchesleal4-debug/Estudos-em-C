#include <stdio.h>

int main() {
    int num_consumidor, tipo;
    float kw;
    float total_res = 0.0f, total_com = 0.0f, total_ind = 0.0f;
    int qtd_res = 0, qtd_com = 0;

    while (1) {
        printf("Numero do consumidor (0 para encerrar): ");
        scanf("%d", &num_consumidor);

        if (num_consumidor == 0) {
            break;
        }

        printf("Quantidade de kWh consumidos: ");
        scanf("%f", &kw);
        printf("Tipo do consumidor (1 - Residencial, 2 - Comercial, 3 - Industrial): ");
        scanf("%d", &tipo);

        float custo = 0.0f;
        if (tipo == 1) {
            custo = kw * 0.3f;
            total_res += kw;
            qtd_res++;
        } else if (tipo == 2) {
            custo = kw * 0.5f;
            total_com += kw;
            qtd_com++;
        } else if (tipo == 3) {
            custo = kw * 0.7f;
            total_ind += kw;
        } else {
            printf("Tipo invalido.\n");
            continue;
        }

        printf("Custo total para o consumidor %d: R$ %.2f\n\n", num_consumidor, custo);
    }

    printf("\n--- RESUMO GERAL ---\n");
    printf("Total consumo Residencial: %.2f kWh\n", total_res);
    printf("Total consumo Comercial: %.2f kWh\n", total_com);
    printf("Total consumo Industrial: %.2f kWh\n", total_ind);

    float soma_res_com = total_res + total_com;
    int qtd_total_res_com = qtd_res + qtd_com;

    if (qtd_total_res_com > 0) {
        printf("Media de consumo dos tipos 1 e 2: %.2f kWh\n", soma_res_com / qtd_total_res_com);
    } else {
        printf("Nenhum consumidor dos tipos 1 ou 2 informado.\n");
    }

    return 0;
}
