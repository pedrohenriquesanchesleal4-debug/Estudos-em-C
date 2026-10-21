#include <stdio.h>

int main(void) {
    float nota1[15], nota2[15];
    int media[15], situacao[15];

    for (int i = 0; i < 15; i++) {
        printf("Aluno %d - nota da prova 1: ", i + 1);
        scanf("%f", &nota1[i]);
        printf("Aluno %d - nota da prova 2: ", i + 1);
        scanf("%f", &nota2[i]);

        media[i] = (int)((nota1[i] + nota2[i]) / 2.0f + 0.5f);
        situacao[i] = media[i] >= 6 ? 1 : 2;
    }

    printf("\nAluno\tNota 1\tNota 2\tMedia\tSituacao\n");
    for (int i = 0; i < 15; i++) {
        printf("%d\t%.2f\t%.2f\t%d\t%s\n", i + 1, nota1[i], nota2[i],
               media[i], situacao[i] == 1 ? "Aprovado" : "Reprovado");
    }

    return 0;
}
