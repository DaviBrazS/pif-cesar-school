#include <stdio.h>

void versaoFor(void) {
    for (int i = 0; i <= 100; i++)
        printf("%d ", i);
    printf("\n");
}

void versaoWhile(void) {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void versaoDoWhile(void) {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main() {
    printf("Versao for:\n");
    versaoFor();
    printf("\nVersao while:\n");
    versaoWhile();
    printf("\nVersao do-while:\n");
    versaoDoWhile();
    return 0;
}
