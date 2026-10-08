#include <stdio.h>

int main() {
    int num, achou = 0;

    printf("Informe um numero limite positivo: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            achou = 1;
        }
    }

    if (!achou)
        printf("Nenhum numero multiplo de 3 e de 5 ao mesmo tempo.");
    printf("\n");
    return 0;
}