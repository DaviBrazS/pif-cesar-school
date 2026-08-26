/* Esse programa mostra o uso de comentários em várias linhas
 * e mostra também o uso de comentários em uma única linha
 *
 * Primeiro programa
 ***************************************************************/
#include <stdio.h> /* biblioteca para entrada e saída de dados*/

int main() /* função principal do programa*/ { /*comça o corpo da função main*/

    int num1, num2, soma; /*variáveis*/

    printf("Digite o primeiro numero: "); /*solicita o primeiro número */ 
    scanf("%d", &num1); /*recebe o primeiro número */ 

    printf("Digite o segundo numero: "); /*solicita o segundo número */ 
    scanf("%d", &num2); /*recebe o segundo número */ 

    soma = num1 + num2; /*faz soma dos dois números */ 
    printf("A soma e: %d\n", soma); /*mostra o resultado da soma */ 
    
    return 0; /*encerra o programa */ 

} /*acaba do corpo da função main*/

