#include <stdio.h>

int main(void) {
    int numeros[15], busca, encontrado = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &busca);

    for (int i = 0; i < 15; i++) {
        if (numeros[i] == busca) {
            printf("Encontrado na posicao %d\n", i + 1);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nao encontrado!\n");
    }

    return 0;
}
