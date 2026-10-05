#include <stdio.h>

int main() {
    float notas[10][4];
    float medias[10];
    float somaTurma = 0;
    float maior, menor;
    int alunoMaior = 0, alunoMenor = 0;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    int opcao;

    do {
        printf("\n1 - Cadastrar notas\n");
        printf("2 - Exibir relatorio\n");
        printf("3 - Exibir estatisticas\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            for (int i = 0; i < 10; i++) {
                printf("\nAluno %d\n", i + 1);

                for (int j = 0; j < 4; j++) {
                    printf("Nota %d: ", j + 1);
                    scanf("%f", &notas[i][j]);
                }
            }

            printf("\nNotas cadastradas com sucesso.\n");
        }

        if (opcao == 2) {
            for (int i = 0; i < 10; i++) {
                float soma = 0;

                for (int j = 0; j < 4; j++) {
                    soma += notas[i][j];
                }

                medias[i] = soma / 4;
            }

            maior = medias[0];
            menor = medias[0];

            printf("\nRelatorio da turma\n");

            for (int i = 0; i < 10; i++) {
                printf("Aluno %d - Media: %.2f - ", i + 1, medias[i]);

                if (medias[i] >= 7.0) {
                    printf("Aprovado\n");
                } else if (medias[i] >= 5.0) {
                    printf("Recuperacao\n");
                } else {
                    printf("Reprovado\n");
                }

                if (medias[i] > maior) {
                    maior = medias[i];
                    alunoMaior = i;
                }

                if (medias[i] < menor) {
                    menor = medias[i];
                    alunoMenor = i;
                }
            }

            printf("\nMaior media: Aluno %d - %.2f\n", alunoMaior + 1, maior);
            printf("Menor media: Aluno %d - %.2f\n", alunoMenor + 1, menor);
        }

        if (opcao == 3) {
            somaTurma = 0;
            aprovados = 0;
            recuperacao = 0;
            reprovados = 0;

            for (int i = 0; i < 10; i++) {
                float soma = 0;

                for (int j = 0; j < 4; j++) {
                    soma += notas[i][j];
                }

                medias[i] = soma / 4;
                somaTurma += medias[i];

                if (medias[i] >= 7.0) {
                    aprovados++;
                } else if (medias[i] >= 5.0) {
                    recuperacao++;
                } else {
                    reprovados++;
                }
            }

            printf("\nMedia geral: %.2f\n", somaTurma / 10);
            printf("Aprovados: %d\n", aprovados);
            printf("Recuperacao: %d\n", recuperacao);
            printf("Reprovados: %d\n", reprovados);
        }

    } while (opcao != 0);

    return 0;
}
