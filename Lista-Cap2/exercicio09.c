#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    
    if (b != 0) {
        printf("Divisao real: %.2f\n", (float)a / b);
    } else {
        printf("Divisao real: Indefinida (divisao por zero)\n");
    }
    
    return 0;
}