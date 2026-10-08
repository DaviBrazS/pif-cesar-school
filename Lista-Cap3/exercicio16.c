#include <stdio.h>

int main() {
    const int SENHA = 2026;
    int tentativa, usadas = 0, acertou = 0;

    while (usadas < 3 && !acertou) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
        usadas++;
        if (tentativa == SENHA)
            acertou = 1;
        else
            printf("Senha incorreta.\n");
    }

    if (acertou)
        printf("Acesso Concedido! Tentativas utilizadas: %d\n", usadas);
    else
        printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}