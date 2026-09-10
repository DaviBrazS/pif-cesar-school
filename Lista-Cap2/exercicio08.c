#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    int quadrado = num * num;
    float decima_parte = (float)num / 10.0;
    
    printf("Quadrado (inteiro): %d\n", quadrado);
    printf("Decima parte (real): %.2f\n", decima_parte);
    
    return 0;
}