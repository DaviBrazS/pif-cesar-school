#include <stdio.h>

int main() {
    int n;
    long long a = 1, b = 1, proximo, atual = 1;

    printf("Informe o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N deve ser positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i <= 2) {
            atual = 1;
        } else {
            proximo = a + b;
            a = b;
            b = proximo;
            atual = proximo;
        }
        printf("%lld ", atual);
    }
    printf("\nTermo %d = %lld\n", n, atual);
    return 0;
}