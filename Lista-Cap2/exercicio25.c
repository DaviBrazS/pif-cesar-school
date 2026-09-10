#include <stdio.h>
int main() {
    float base, liquido;
    printf("Salario-base: R$ ");
    scanf("%f", &base);

    liquido = base * 0.98;
    printf("Salario liquido: R$ %.2f\n", liquido);
    return 0;
}