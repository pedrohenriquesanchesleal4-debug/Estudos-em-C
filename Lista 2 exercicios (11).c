#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite o primeiro numero real: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero real: ");
    scanf("%f", &n2);
    printf("Digite o terceiro numero real: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3.0f;
    printf("Media aritmetica: %.2f\n", media);
    return 0;
}
