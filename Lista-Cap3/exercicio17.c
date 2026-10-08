#include <stdio.h>

int main() {
    float nota, soma = 0, maior = 0, menor = 0;
    int total = 0;

    printf("Digite as notas (-1.0 encerra):\n");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (total == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }
        soma += nota;
        total++;
        scanf("%f", &nota);
    }

    if (total == 0) {
        printf("Nenhuma nota informada.\n");
    } else {
        printf("Total de alunos: %d\n", total);
        printf("Maior nota: %.1f\n", maior);
        printf("Menor nota: %.1f\n", menor);
        printf("Media geral: %.2f\n", soma / total);
    }
    return 0;
}