#include <stdio.h>
int main() {
    float kmh;
    printf("Velocidade (km/h): ");
    scanf("%f", &kmh);
    printf("Velocidade (m/s): %.2f\n", kmh / 3.6);
    return 0;
}