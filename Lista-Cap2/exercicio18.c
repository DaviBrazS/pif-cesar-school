#include <stdio.h>
#define PI 3.141593

int main() {
    float raio;
    printf("Raio da esfera: ");
    scanf("%f", &raio);
    float volume = (4.0 / 3.0) * PI * raio * raio * raio;
    float area = 4.0 * PI * raio * raio;
    printf("Area Sup: %.4f | Volume: %.4f\n", area, volume);
    return 0;
}