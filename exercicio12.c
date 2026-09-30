#include <stdio.h>

int main() {
    int i, idade, opiniao;
    int soma_idade_excelente = 0, qtd_excelente = 0;
    int qtd_regular = 0, qtd_bom = 0;

    for (i = 0; i < 20; i++) {
        printf("Espectador %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Opiniao (3 - Excelente, 2 - Bom, 1 - Regular): ");
        scanf("%d", &opiniao);

        if (opiniao == 3) {
            soma_idade_excelente += idade;
            qtd_excelente++;
        } else if (opiniao == 2) {
            qtd_bom++;
        } else if (opiniao == 1) {
            qtd_regular++;
        }
    }

    if (qtd_excelente > 0) {
        printf("Media das idades (Excelente): %.2f\n", (float)soma_idade_excelente / qtd_excelente);
    } else {
        printf("Nenhum espectador respondeu Excelente.\n");
    }

    printf("Quantidade de respostas Regular: %d\n", qtd_regular);
    printf("Percentual de respostas Bom: %.2f%%\n", (qtd_bom / 20.0f) * 100.0f);

    return 0;
}
