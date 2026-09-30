#include <stdio.h>

int main() {
    float valor_dolar, cotacao, valor_real;
    printf("Digite o valor em dolar (US$): ");
    scanf("%f", &valor_dolar);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    valor_real = valor_dolar * cotacao;
    printf("Valor em reais (R$): %.2f\n", valor_real);

    return 0;
}
