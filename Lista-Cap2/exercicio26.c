#include <stdio.h>
int main() {
    float comp, larg, preco, metros, custo;
    printf("Comprimento e largura (m): ");
    scanf("%f %f", &comp, &larg);
    printf("Preco do metro do arame (R$): ");
    scanf("%f", &preco);
    
    metros = 2 * (comp + larg) * 3;
    custo = metros * preco;
    
    printf("Arame a comprar: %.2f metros\n", metros);
    printf("Custo total: R$ %.2f\n", custo);
    return 0;
}