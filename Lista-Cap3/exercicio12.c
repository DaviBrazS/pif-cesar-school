#include <stdio.h>

int main() {
    printf("%10s %12s %12s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("--------------------------------------\n");

    for (int c = 0; c <= 100; c += 5) {
        float f = (9.0 * c) / 5 + 32;
        float k = c + 273.15;
        printf("%10d %12.2f %12.2f\n", c, f, k);
    }
    return 0;
}