#include <stdio.h>

int main() {
    float indice;

    printf("Digite o indice de poluicao medido: ");
    scanf("%f", &indice);

    if (indice >= 0.5f) {
        printf("Intimacao: Industrias do 1o, 2o e 3o grupos devem suspender suas atividades.\n");
    } else if (indice >= 0.4f) {
        printf("Intimacao: Industrias do 1o e 2o grupos devem suspender suas atividades.\n");
    } else if (indice >= 0.3f) {
        printf("Intimacao: Industrias do 1o grupo devem suspender suas atividades.\n");
    } else {
        printf("Indice de poluicao dentro do limite aceitavel.\n");
    }

    return 0;
}
