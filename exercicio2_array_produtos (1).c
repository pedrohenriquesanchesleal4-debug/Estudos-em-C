#include <stdio.h>

typedef struct {
    int codigo;
    char nome[40];
    int quantidade;
    float preco;
} Produto;

int main() {
    Produto produtos[5];
    float total = 0.0f;
    int maisCaro = 0;

    for (int i = 0; i < 5; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Nome: ");
        scanf(" %39[^\n]", produtos[i].nome);

        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);

        printf("Preco unitario: ");
        scanf("%f", &produtos[i].preco);

        total += produtos[i].quantidade * produtos[i].preco;

        if (i == 0 || produtos[i].preco > produtos[maisCaro].preco) {
            maisCaro = i;
        }
    }

    printf("\n--- Valor Total do Estoque ---\n");
    printf("R$ %.2f\n", total);

    printf("\n--- Produto Mais Caro ---\n");
    printf("Nome: %s\n", produtos[maisCaro].nome);
    printf("Preco: R$ %.2f\n", produtos[maisCaro].preco);

    printf("\n--- Produtos com Estoque Abaixo de 10 ---\n");

    for (int i = 0; i < 5; i++) {
        if (produtos[i].quantidade < 10) {
            printf("Nome: %s | Quantidade: %d\n",
                   produtos[i].nome, produtos[i].quantidade);
        }
    }

    return 0;
}
