#include <stdio.h>

int main() {
    char nome[100];
    char endereco[150];
    char telefone[30];

    printf("Digite o nome: ");
    scanf(" %99[^\n]", nome);
    printf("Digite o endereco: ");
    scanf(" %149[^\n]", endereco);
    printf("Digite o telefone: ");
    scanf(" %29[^\n]", telefone);

    printf("\nNome: %s\n", nome);
    printf("Endereco: %s\n", endereco);
    printf("Telefone: %s\n", telefone);

    return 0;
}
