#include <stdio.h>

int main() {
    int l;

    do {
        printf("Informe o lado do quadrado (3 a 20): ");
        scanf("%d", &l);
    } while (l < 3 || l > 20);

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            if (i == 0 || i == l - 1 || j == 0 || j == l - 1)
                printf("X");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}