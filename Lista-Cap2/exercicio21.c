#include <stdio.h>

int main() {
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    printf("Codigo ASCII do caractere '%c' eh: %d\n", c, c);
    return 0;
}