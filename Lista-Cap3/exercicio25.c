#include <stdio.h>

int main() {
    int n, divisores = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            divisores++;
    }

    printf("Divisores encontrados: %d\n", divisores);
    if (n > 1 && divisores == 2)
        printf("%d e primo.\n", n);
    else
        printf("%d nao e primo.\n", n);

    return 0;
}