#include <stdio.h>

int main() {
    int placa, ultimo_digito;

    printf("Digite os numeros da placa do carro: ");
    scanf("%d", &placa);

    ultimo_digito = placa % 10;
    if (ultimo_digito < 0) {
        ultimo_digito = -ultimo_digito;
    }

    switch (ultimo_digito) {
        case 1: printf("Mes de renovacao: Janeiro\n"); break;
        case 2: printf("Mes de renovacao: Fevereiro\n"); break;
        case 3: printf("Mes de renovacao: Marco\n"); break;
        case 4: printf("Mes de renovacao: Abril\n"); break;
        case 5: printf("Mes de renovacao: Maio\n"); break;
        case 6: printf("Mes de renovacao: Junho\n"); break;
        case 7: printf("Mes de renovacao: Julho\n"); break;
        case 8: printf("Mes de renovacao: Agosto\n"); break;
        case 9: printf("Mes de renovacao: Setembro\n"); break;
        case 0: printf("Mes de renovacao: Outubro\n"); break;
    }

    return 0;
}
