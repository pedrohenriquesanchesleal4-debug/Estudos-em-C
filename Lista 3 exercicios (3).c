#include <stdio.h>

int main() {
    float saldo_medio, credito = 0.0f;
    printf("Digite o saldo medio: ");
    scanf("%f", &saldo_medio);

    if (saldo_medio >= 0 && saldo_medio <= 500) {
        credito = 0.0f;
    } else if (saldo_medio >= 501 && saldo_medio <= 1000) {
        credito = saldo_medio * 0.30f;
    } else if (saldo_medio >= 1001 && saldo_medio <= 3000) {
        credito = saldo_medio * 0.40f;
    } else if (saldo_medio > 3000) {
        credito = saldo_medio * 0.50f;
    }

    printf("Saldo medio: R$ %.2f\n", saldo_medio);
    printf("Valor do credito: R$ %.2f\n", credito);

    return 0;
}
