#include <stdio.h>

int main()
{
    int total, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &total);

    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);

    return 0;
}