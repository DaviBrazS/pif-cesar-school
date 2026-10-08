#include <stdio.h>

int main() {
    int a, b;

    printf("Informe A: ");
    scanf("%d", &a);
    printf("Informe B: ");
    scanf("%d", &b);

    if (a <= b) {
        for (int i = a; i <= b; i++)
            printf("%d ", i);
    } else {
        for (int i = a; i >= b; i--)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}