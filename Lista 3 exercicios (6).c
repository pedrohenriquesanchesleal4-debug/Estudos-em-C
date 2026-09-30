#include <stdio.h>

int main() {
    int prato, sobremesa, bebida;
    int calorias = 0;

    printf("Escolha o prato:\n1 - Vegetariano\n2 - Peixe\n3 - Frango\n4 - Carne\nOpcao: ");
    scanf("%d", &prato);

    printf("Escolha a sobremesa:\n1 - Abacaxi\n2 - Sorvete diet\n3 - Mousse diet\n4 - Mousse chocolate\nOpcao: ");
    scanf("%d", &sobremesa);

    printf("Escolha a bebida:\n1 - Cha\n2 - Suco de laranja\n3 - Suco de melao\n4 - Refrigerante diet\nOpcao: ");
    scanf("%d", &bebida);

    switch (prato) {
        case 1: calorias += 180; break;
        case 2: calorias += 230; break;
        case 3: calorias += 250; break;
        case 4: calorias += 350; break;
    }

    switch (sobremesa) {
        case 1: calorias += 75; break;
        case 2: calorias += 110; break;
        case 3: calorias += 170; break;
        case 4: calorias += 200; break;
    }

    switch (bebida) {
        case 1: calorias += 20; break;
        case 2: calorias += 70; break;
        case 3: calorias += 100; break;
        case 4: calorias += 65; break;
    }

    printf("\nQuantidade total de calorias: %d cal\n", calorias);

    return 0;
}
