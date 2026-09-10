#include <stdio.h>

int main() {
    int h, m, s, duracao, total_segundos;
    
    printf("Horario de inicio (hh mm ss separadamente): ");
    scanf("%d %d %d", &h, &m, &s);
    printf("Duracao em segundos: ");
    scanf("%d", &duracao);
    
    total_segundos = (h * 3600) + (m * 60) + s + duracao;
    
    int h_final = (total_segundos / 3600) % 24;
    int m_final = (total_segundos % 3600) / 60;
    int s_final = total_segundos % 60;
    
    printf("Horario de termino: %02d:%02d:%02d\n", h_final, m_final, s_final);
    return 0;
}