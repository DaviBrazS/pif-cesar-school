#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int quantidade = 0;

    printf("Digite valores positivos (valor negativo encerra):\n");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        quantidade++;
        scanf("%f", &valor);
    }

    printf("Quantidade de valores: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);
    if (quantidade > 0)
        printf("Media: %.2f\n", soma / quantidade);
    else
        printf("Media: nao ha valores validos.\n");

    return 0;
}