#include <stdio.h>

typedef struct {
    char titulo[100];
    char autor[50];
    int ano;
    float preco;
} Livro;

int main() {
    Livro livro;

    printf("Digite o titulo: ");
    scanf(" %99[^\n]", livro.titulo);

    printf("Digite o autor: ");
    scanf(" %49[^\n]", livro.autor);

    printf("Digite o ano de publicacao: ");
    scanf("%d", &livro.ano);

    printf("Digite o preco: ");
    scanf("%f", &livro.preco);

    printf("\n--- Dados do Livro ---\n");
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Ano: %d\n", livro.ano);
    printf("Preco: R$ %.2f\n", livro.preco);

    livro.preco *= 0.85f;

    printf("Preco com desconto: R$ %.2f\n", livro.preco);

    return 0;
}
