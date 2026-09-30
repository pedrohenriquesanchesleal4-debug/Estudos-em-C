#include <stdio.h>

int main() {
    char nome_livro[100];
    int tipo;

    printf("Digite o nome do livro: ");
    scanf(" %99[^\n]", nome_livro);

    printf("Digite o tipo de usuario (1 - Professor, 2 - Aluno): ");
    scanf("%d", &tipo);

    printf("\nNome do livro: %s\n", nome_livro);

    if (tipo == 1) {
        printf("Tipo de usuario: Professor\n");
        printf("Total de dias: 10\n");
    } else if (tipo == 2) {
        printf("Tipo de usuario: Aluno\n");
        printf("Total de dias: 3\n");
    } else {
        printf("Tipo de usuario invalido\n");
    }

    return 0;
}
