## Questão 01
a) O `while` testa a condição antes de executar o bloco, então pode executar 0 vezes. O `do-while` executa o bloco e só depois testa a condição, então executa no mínimo 1 vez.

b) `for`: quando o número de repetições é conhecido (contagens, vetores). `while`: quando a repetição depende de uma condição e pode nem ocorrer (leitura até sentinela). `do-while`: quando o bloco precisa rodar ao menos uma vez (menus, validação de entrada).

c) Não é erro de compilação, é erro de lógica. O `;` torna-se o corpo vazio do laço. Se `condicao` for verdadeira e nada dentro do laço a altera, o programa fica preso em laço infinito, e o bloco seguinte nunca é executado.

## Questão 02
a) `soma` foi declarada dentro do bloco do `for`. Seu escopo termina na `}`, então no `printf` final ela não existe (identificador não declarado).

b) Porque `int soma = 0;` é recriada e zerada a cada iteração. Assim `soma += i * i` resulta apenas em `i*i`, e nada é acumulado.

c) Código corrigido:
```c
#include <stdio.h>

int main() {
    int i, soma = 0;
    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    return 0;
}
```
Escopo de bloco: uma variável só é visível dentro do bloco `{ }` em que foi declarada. Tempo de vida: ela é criada quando o bloco é executado e destruída ao sair dele. Por isso o acumulador deve ser declarado fora do laço.

## Questão 03
a) `36	18	9	4	2	1` (depois `a` vira 0 e o laço termina).

b) O laço lê caracteres do teclado com `getch()` até digitar `X`; para cada um imprime o caractere seguinte na tabela ASCII (`ch + 1`; digitar `A` imprime `B`). Os parênteses são necessários porque `!=` tem precedência maior que `=`. Sem eles, seria `ch = (getch() != 'X')`, atribuindo 0 ou 1 a `ch`.

c) Com `break` dentro do laço (por exemplo, após um `if`), com `return` na função, `exit()` ou `goto`.

## Questão 04
a) O `break` encerra imediatamente o laço, e a execução continua na primeira instrução após ele.

b) O `continue` pula o restante do corpo da iteração atual. No `for`, a expressão executada em seguida é a de incremento (3ª), e depois o teste.

c) Apenas o laço interno (o mais próximo do `break`) é interrompido. O externo continua.

## Questão 05
a) 5 iterações.

b)
```
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```
(Na próxima checagem i = 5 e j = 5, e `5 < 5` é falso.)

c)
```c
int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

## Questão 06
a) `Valor final de x = 6`.

b) `x++ < 5` compara com o valor antigo de x e depois incrementa:
- x=0: 0<5 verdadeiro, x vira 1
- x=1: 1<5 verdadeiro, x vira 2
- x=2: verdadeiro, x vira 3
- x=3: verdadeiro, x vira 4
- x=4: verdadeiro, x vira 5
- x=5: 5<5 falso, mas x ainda é incrementado e vira 6. O laço termina.

c)
```c
int x = 0;
while (x < 5) {
    x++;
}
x++;
printf("Valor final de x = %d\n", x);
```
