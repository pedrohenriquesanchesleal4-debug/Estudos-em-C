#include <stdio.h>

int main() {
    float saldo, novo_saldo;
    printf("Digite o saldo da conta poupanca: ");
    scanf("%f", &saldo);
    novo_saldo = saldo * 1.02f;
    printf("Novo saldo com reajuste: %.2f\n", novo_saldo);
    return 0;
}
