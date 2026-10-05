#include <stdio.h>

int main() {
    float notas[8];
    float soma = 0, media, maior, menor;
    int acima = 0;

    for (int i = 0; i < 8; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 8;
    maior = notas[0];
    menor = notas[0];

    for (int i = 0; i < 8; i++) {
        if (notas[i] > media) {
            acima++;
        }

        if (notas[i] > maior) {
            maior = notas[i];
        }

        if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    printf("\nMedia da turma: %.2f\n", media);
    printf("Alunos acima da media: %d\n", acima);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}
