#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 

    int d1 = (rand() % 6) + 1;
    int d2 = (rand() % 6) + 1;
    int d3 = (rand() % 6) + 1;
    
    printf("Lancamento dos 3 dados: %d, %d, %d\n", d1, d2, d3);
    
    return 0;
}