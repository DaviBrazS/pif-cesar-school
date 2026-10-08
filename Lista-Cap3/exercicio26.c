#include <stdio.h>

int main() {
    int a, b;
    long soma = 0;

    do {
        printf("Informe A e B positivos (A < B): ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos em [%d, %d]: ", a, b);
    for (int n = a; n <= b; n++) {
        int divisores = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                divisores++;
        }
        if (n > 1 && divisores == 2) {
            printf("%d ", n);
            soma += n;
        }
    }
    printf("\nSoma dos primos: %ld\n", soma);
    return 0;
}