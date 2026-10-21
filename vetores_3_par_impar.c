#include <stdio.h>

int main(void) {
    int numeros[15];

    for (int i = 0; i < 15; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nListagem\n");
    for (int i = 0; i < 15; i++) {
        printf("%d. %d - %s\n", i + 1, numeros[i],
               numeros[i] % 2 == 0 ? "par" : "impar");
    }

    return 0;
}
