#include <stdio.h>

int main() {
    float p1, p2, p3, temp;
    printf("Digite os pontos do jogador 1: ");
    scanf("%f", &p1);
    printf("Digite os pontos do jogador 2: ");
    scanf("%f", &p2);
    printf("Digite os pontos do jogador 3: ");
    scanf("%f", &p3);

    if (p1 < p2) { temp = p1; p1 = p2; p2 = temp; }
    if (p1 < p3) { temp = p1; p1 = p3; p3 = temp; }
    if (p2 < p3) { temp = p2; p2 = p3; p3 = temp; }

    printf("Pontuacao em ordem decrescente: %.2f, %.2f, %.2f\n", p1, p2, p3);

    float soma = p1 + p2 + p3;
    if (soma > 100) {
        printf("Media aritmetica: %.2f\n", soma / 3.0f);
    } else {
        printf("Equipe desclassificada\n");
    }

    return 0;
}
