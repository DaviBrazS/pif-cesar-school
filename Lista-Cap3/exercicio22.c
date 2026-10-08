#include <stdio.h>

int main() {
    int n, contador = 1;

    printf("Informe o numero de linhas: ");
    scanf("%d", &n);

    for (int linha = 1; linha <= n; linha++) {
        for (int col = 1; col <= linha; col++) {
            printf("%d ", contador);
            contador++;
        }
        printf("\n");
    }
    return 0;
}