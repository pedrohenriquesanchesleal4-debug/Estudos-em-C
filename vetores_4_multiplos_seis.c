#include <stdio.h>

int main(void) {
    int numeros[8], total = 0;

    for (int i = 0; i < 8; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros digitados\n");
    for (int i = 0; i < 8; i++) {
        printf("%d\n", numeros[i]);
        if (numeros[i] % 6 == 0) {
            total++;
        }
    }

    printf("Total de numeros multiplos de seis: %d\n", total);

    return 0;
}
