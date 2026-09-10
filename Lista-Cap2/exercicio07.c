#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Digite uma data no formato dd/mm/aaaa: ");
    
    if (scanf("%d/%d/%d", &dia, &mes, &ano) == 3) {
        printf("Data invertida: %04d/%02d/%02d\n", ano, mes, dia);
    } else {
        printf("Formato invalido!\n");
    }
    
    return 0;
}