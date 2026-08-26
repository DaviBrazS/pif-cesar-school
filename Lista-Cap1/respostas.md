Questão 07

a) printf("\n\tBom dia! Shirley.");
/*

	Bom dia! Shirley.

    pula uma linha, dá um espaço de tabulação e escreve
    */

b) printf("Você já tomou café? \n");
/*
Você já tomou café? 

    escreve "Você já tomou café?" e pula uma linha
*/

c) printf("\n\nA solução não existe!\nNão insista.");
/*


A solução não existe!
Não insista.

    pula duas linhas, escreve "A solução não existe!", pula uma linha e escreve "Não insista."
*/

d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
/*
Duas	linhas	de	saída
ou	uma?

    escreve as palavras separadas por tabulações, pula uma linha e escreve "ou" e "uma?" separados por tabulação
*/

e) printf("%s\n%s\n%s\n", "um", "dois", "três");
/*
um
dois
três

    imprime "um", "dois" e "três", cada um em uma linha
*/


Questão 08

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n\t\"Primeiro programa\"");
    system("PAUSE");
    return 0;
}
/*
\n quebra uma linha, \t faz uma tabulação e \" coloca as aspas

SAÍDA:

	"Primeiro programa"
Pressione qualquer tecla para continuar. . .
*/


Questão 09

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
    printf("%c", "\"");
    system("PAUSE");
    return 0;
}
/*
SAÍDA do primeiro printf:

	"Primeiro programa

o segundo printf dá erro: %c espera um caractere ('\"' entre aspas simples), mas "\"" é uma string, não um char. Isso é comportamento indefinido, pode sair qualquer coisa.
*/


Questão 10

Alternativa correta: b)

C diferencia maiúsculas de minúsculas. peso, Peso e PESO são três variáveis diferentes, com endereços de memória diferentes.


Questão 11

\r          -> sequência de escape          -> char
2130        -> constante inteira decimal    -> int
-123        -> constante inteira decimal    -> int
33.28       -> constante ponto flutuante    -> double
0XFA        -> constante inteira hexadecimal -> int
0101        -> constante inteira octal      -> int
2.0e30      -> constante ponto flutuante    -> double
\xDC        -> sequência de escape hexadecimal -> char
'\"'        -> constante de caractere       -> char
'\\'        -> constante de caractere       -> char
'F'         -> constante de caractere       -> char
0           -> constante inteira decimal    -> int
'\0'        -> constante de caractere       -> char
"F"         -> constante string             -> char[]
-4567.89    -> constante ponto flutuante    -> double


Questão 12

a) int a;              -> Correto
b) float b;             -> Correto
c) double float c;      -> Incorreto - não pode combinar dois tipos base diferentes (double e float) numa mesma declaração, sintaxe inválida
d) unsigned char d;     -> Correto
e) unsigned e;          -> Correto (unsigned sozinho equivale a unsigned int)
f) long float f;        -> Incorreto - "long float" não é uma combinação de tipo válida em C ANSI
g) long g;              -> Correto (long equivale a long int)
h) long double h;       -> Correto


Questão 13

Alternativa correta: c)

Headers são arquivos de texto ASCII com protótipos de funções, definição de constantes, macros e tipos - não são binários nem executados pelo processador.


Questão 14

Alternativa correta: a)

Incluir <stdio.h> instrui o compilador a conhecer as definições das funções da biblioteca padrão antes de compilar o código.


Questão 15

Alternativa correta: c)

#include é uma diretiva de pré-processador, executada antes da compilação, não uma instrução C.


Questão 16

Alternativa correta: c)

Diretivas com # são lidas pelo pré-processador, fase que roda antes da compilação propriamente dita.


Questão 17

Corretas: a, b, c
Incorreta: d (falta os parênteses em volta do argumento)

Isso mostra que o compilador C é flexível com espaços em branco entre os tokens (não importa se tem espaço antes/depois dos parênteses), mas exige rigorosamente a sintaxe correta: parênteses e ponto-e-vírgula não podem faltar.