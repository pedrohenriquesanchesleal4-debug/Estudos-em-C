#include <stdio.h>

int main(void) {
    int matrizA[3][4], matrizB[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
            matrizB[i][j] = matrizA[i][j] * 3;
        }
    }

    printf("\nMatriz B (triplo da matriz A)\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
