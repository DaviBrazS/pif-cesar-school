#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau_cm, altura_total_m, altura_total_cm;
    
    printf("Altura de cada degrau (cm): ");
    scanf("%f", &altura_degrau_cm);
    
    printf("Altura total a alcancar (m): ");
    scanf("%f", &altura_total_m);
    
    altura_total_cm = altura_total_m * 100.0;

    int degraus = ceil(altura_total_cm / altura_degrau_cm);
    
    printf("Numero minimo de degraus: %d\n", degraus);
    
    return 0;
}