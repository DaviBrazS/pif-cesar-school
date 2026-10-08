#include <stdio.h>

int main() {
    int valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2};

    printf("Informe o valor do saque (R$): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    for (int i = 0; i < 6; i++) {
        int qtd = 0;
        while (valor >= cedulas[i]) {
            valor -= cedulas[i];
            qtd++;
        }
        if (qtd > 0)
            printf("%d nota(s) de R$ %d\n", qtd, cedulas[i]);
    }

    if (valor != 0)
        printf("Resto de R$ %d nao pode ser composto com essas notas.\n", valor);

    return 0;
}