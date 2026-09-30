#include <stdio.h>

struct Pessoa {
    char nome[100];
    float salario_bruto;
    float imposto;
};

int main() {
    struct Pessoa pessoas[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %99[^\n]", pessoas[i].nome);
        printf("Salario bruto: ");
        scanf("%f", &pessoas[i].salario_bruto);

        if (pessoas[i].salario_bruto < 1300.0f) {
            pessoas[i].imposto = 0.0f;
        } else if (pessoas[i].salario_bruto < 2300.0f) {
            pessoas[i].imposto = pessoas[i].salario_bruto * 0.10f;
        } else {
            pessoas[i].imposto = pessoas[i].salario_bruto * 0.15f;
        }
    }

    printf("\n--- RESULTADO IRRF ---\n");
    for (i = 0; i < 10; i++) {
        printf("Nome: %-20s | Salario Bruto: R$ %8.2f | Imposto de Renda: R$ %8.2f\n",
               pessoas[i].nome, pessoas[i].salario_bruto, pessoas[i].imposto);
    }

    return 0;
}
