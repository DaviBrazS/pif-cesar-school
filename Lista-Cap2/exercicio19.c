#include <stdio.h>

int main() {
    int dias;
    printf("Dias trabalhados: ");
    scanf("%d", &dias);
    
    float bruto = dias * 30.0;
    float liquido = bruto - (bruto * 0.08);
    
    printf("Valor Bruto: R$ %.2f\n", bruto);
    printf("Valor Liquido: R$ %.2f\n", liquido);
    return 0;
}