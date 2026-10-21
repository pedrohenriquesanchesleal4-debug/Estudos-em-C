#include <stdio.h>

int main(void) {
    char letras[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite a %dª letra: ", i + 1);
        scanf(" %c", &letras[i]);
    }

    printf("\nListagem de letras\n");
    for (int i = 0; i < 10; i++) {
        printf("%d. %c\n", i + 1, letras[i]);
    }

    return 0;
}
