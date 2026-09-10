#include <stdio.h>

int main() {
    char maiuscula, minuscula;
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);
    
    minuscula = maiuscula + 32;
    
    printf("Letra minuscula correspondente: %c\n", minuscula);
    return 0;
}