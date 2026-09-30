#include <stdio.h>

int main() {
    float percurso, consumo;
    char tipo;

    printf("Digite o percurso em km: ");
    scanf("%f", &percurso);

    printf("Digite o tipo do carro (A, B ou C): ");
    scanf(" %c", &tipo);

    float km_l = 0.0f;
    if (tipo == 'A' || tipo == 'a') {
        km_l = 8.0f;
    } else if (tipo == 'B' || tipo == 'b') {
        km_l = 9.0f;
    } else if (tipo == 'C' || tipo == 'c') {
        km_l = 12.0f;
    }

    if (km_l > 0) {
        consumo = percurso / km_l;
        printf("Consumo estimado de combustivel: %.2f litros\n", consumo);
    } else {
        printf("Tipo de carro invalido.\n");
    }

    return 0;
}
