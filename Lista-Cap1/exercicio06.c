/* faltou iniciar com as bibliotecas
main() -> faltou o int da função
{ 
int a=1; b=2; c=3: -> teria que colocar a virgula, B e C nao estoa sendo declaradas como int porque ta sem a virgula, e colocando no fim de c=3;, ponto e virgula
printf("0s números são: %d%d%d\n, a, b, c, d); -> esse inicio da frase é um zero ao inves da letra O, a string nao foi fechada, d nao foi declarada
system("pause"); }

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;

    printf("Os numeros sao: %d%d%d\n", a, b, c);

    system("pause");

    return 0;
}