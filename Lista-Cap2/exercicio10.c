#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;
    
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;
    
    printf("%.2f C equivale a %.2f F e %.2f K\n", celsius, fahrenheit, kelvin);
    
    return 0;
}