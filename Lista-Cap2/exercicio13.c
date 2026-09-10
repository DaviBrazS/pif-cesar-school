#include <stdio.h>

int main() {
    float lado, base, altura;
    
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    
    printf("Digite a base e altura do retangulo/triangulo: ");
    scanf("%f %f", &base, &altura);
    
    printf("Area do Quadrado: %.2f\n", lado * lado);
    printf("Area do Retangulo: %.2f\n", base * altura);
    printf("Area do Triangulo: %.2f\n", (base * altura) / 2.0);
    
    return 0;
}