#include <stdio.h>

int main() {
    float num;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    printf("1/4 do numero: %.2f\n", num / 4.0f);
    return 0;
}
