/*

#include <stdio.h>
#include <stdlib.h>; -> não precisa ter esse ';' depois do include
int Main{} -> era pra ser parenteses '()'
( -> e aqui para abrir uma função era chaves '{}'
printf( Existem %d semanas no ano.,52); -> faltou as aspas "" no texto e a string está errada
cout << endl; cout não existe em C
system("PAUSE"); 
faltou fechar o progama com a chave '}'
return 0;

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);
    printf("\n");

    system("PAUSE");

    return 0;
}
