#include <stdio.h>

struct Aluno {
    char nome[100];
    float nota1;
    float nota2;
    float media;
};

int main() {
    struct Aluno alunos[15];
    float soma_geral = 0.0f;
    int i;

    for (i = 0; i < 15; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %99[^\n]", alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2.0f;
        soma_geral += alunos[i].media;
    }

    printf("\n--- LISTAGEM DE ALUNOS ---\n");
    for (i = 0; i < 15; i++) {
        printf("Nome: %-20s | Nota 1: %5.2f | Nota 2: %5.2f | Media: %5.2f\n",
               alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].media);
    }

    printf("\nMedia geral da turma: %.2f\n", soma_geral / 15.0f);

    return 0;
}
