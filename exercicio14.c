#include <stdio.h>

int main() {
    double popA = 5000000.0;
    double popB = 7000000.0;
    int anos = 0;

    while (popA <= popB) {
        popA *= 1.03;
        popB *= 1.02;
        anos++;
    }

    printf("Anos necessarios para a populacao do pais A ultrapassar a do pais B: %d\n", anos);

    return 0;
}
