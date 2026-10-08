#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char secreta = rand() % 26 + 'a';
    char palpite;
    int tentativas = 0;

    printf("Adivinhe a letra minuscula sorteada (a-z)!\n");

    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreta)
            printf("A letra secreta vem DEPOIS de '%c' no alfabeto.\n", palpite);
        else if (palpite > secreta)
            printf("A letra secreta vem ANTES de '%c' no alfabeto.\n", palpite);
    } while (palpite != secreta);

    printf("Parabens! Voce acertou a letra '%c' em %d tentativa(s).\n", secreta, tentativas);
    return 0;
}