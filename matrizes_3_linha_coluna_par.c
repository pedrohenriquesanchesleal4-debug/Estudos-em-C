#include <stdio.h>

int main(void) {
    int matriz[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nElementos em que linha + coluna formam um numero par\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (((i + 1) + (j + 1)) % 2 == 0) {
                printf("matriz[%d][%d] = %d\n", i + 1, j + 1, matriz[i][j]);
            }
        }
    }

    return 0;
}
