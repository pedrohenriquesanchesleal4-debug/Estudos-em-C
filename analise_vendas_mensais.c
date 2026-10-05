#include <stdio.h>

int main() {
    float vendas[12];
    float total = 0, media, maior, menor;
    int mesMaior = 0, mesMenor = 0;
    int acima = 0;

    for (int i = 0; i < 12; i++) {
        printf("Digite as vendas do mes %d: ", i + 1);
        scanf("%f", &vendas[i]);
        total += vendas[i];
    }

    media = total / 12;
    maior = vendas[0];
    menor = vendas[0];

    for (int i = 0; i < 12; i++) {
        if (vendas[i] > maior) {
            maior = vendas[i];
            mesMaior = i;
        }

        if (vendas[i] < menor) {
            menor = vendas[i];
            mesMenor = i;
        }

        if (vendas[i] > media) {
            acima++;
        }
    }

    printf("\nTotal de vendas: %.2f\n", total);
    printf("Maior venda: %.2f - Mes %d\n", maior, mesMaior + 1);
    printf("Menor venda: %.2f - Mes %d\n", menor, mesMenor + 1);
    printf("Media mensal: %.2f\n", media);
    printf("Meses acima da media: %d\n", acima);

    return 0;
}
