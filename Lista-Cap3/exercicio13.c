#include <stdio.h>

int main() {
    int n;
    long long fatorial = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
        return 1;
    }
    if (n > 20) {
        printf("Aviso: acima de 20 o resultado estoura o long long.\n");
        return 1;
    }

    for (int i = 2; i <= n; i++)
        fatorial *= i;

    printf("%d! = %lld\n", n, fatorial);
    return 0;
}   