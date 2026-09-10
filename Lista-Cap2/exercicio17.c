#include <stdio.h>
#define PI 3.141593

int main() {
    float raio;
    printf("Raio do circulo: ");
    scanf("%f", &raio);
    printf("Area: %.4f | Circunferencia: %.4f\n", PI * raio * raio, 2 * PI * raio);
    return 0;
}