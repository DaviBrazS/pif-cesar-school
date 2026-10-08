#include <stdio.h>

int main() {
    int opcao;
    float salario, novo, desconto;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Salario atual: R$ ");
                scanf("%f", &salario);
                if (salario <= 2000.00)
                    novo = salario * 1.15;
                else
                    novo = salario * 1.10;
                printf("Novo salario: R$ %.2f\n", novo);
                break;
            case 2:
                printf("Salario: R$ ");
                scanf("%f", &salario);
                if (salario <= 3000.00)
                    desconto = salario * 0.08;
                else
                    desconto = salario * 0.15;
                printf("Imposto retido: R$ %.2f\n", desconto);
                printf("Salario liquido: R$ %.2f\n", salario - desconto);
                break;
            case 3:
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}