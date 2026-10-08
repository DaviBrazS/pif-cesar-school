#include <stdio.h>

int main() {
    long soma = 0;

    for (int i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }
    printf("Soma total dos quadrados: %ld\n", soma);
    return 0;
}