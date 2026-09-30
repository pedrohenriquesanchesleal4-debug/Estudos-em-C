#include <stdio.h>

int main() {
    int num, contador = 0;

    printf("Digite numeros inteiros (0 para encerrar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num >= 100 && num <= 200) {
            contador++;
        }
    }

    printf("Quantidade de numeros entre 100 e 200: %d\n", contador);

    return 0;
}
