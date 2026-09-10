#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    
    printf("Total de horas normais no ano: ");
    scanf("%f", &horas_normais);
    printf("Total de horas extras no ano: ");
    scanf("%f", &horas_extras);
    
    float bruto = (horas_normais * 10.0) + (horas_extras * 15.0);
    
    float imposto = (bruto > 12000.0) ? (bruto - 12000.0) * 0.10 : 0.0;
    
    printf("Salario Bruto Anual: R$ %.2f\n", bruto);
    printf("Imposto Devido: R$ %.2f\n", imposto);
    printf("Salario Liquido Anual: R$ %.2f\n", bruto - imposto);
    
    return 0;
}