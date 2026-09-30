#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota, soma = 0.0, media;
    int alunos, totalalunos;
	
    do {
        printf("quantos alunos tem na turma? ");
        scanf("%d", &alunos);
    } while (alunos <= 0);

    totalalunos = alunos;

    while (alunos > 0) {
        printf("Digite a nota do aluno %d : ", alunos);
        scanf("%f", &nota);
   	
        soma = soma + nota;
        alunos--;
    }

    media = soma / totalalunos;
    printf("\nA media da turma e: %.2f\n", media);
	
    return 0;
}
