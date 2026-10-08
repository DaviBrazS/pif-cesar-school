#include <stdio.h>

int main() {
    int numero, invertido = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("Numero invertido: %d\n", invertido);
    return 0;
}