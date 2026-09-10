Questão 01. Truncamento de Tipos e Coerção Implícita
a) Qual é o valor numérico que será efetivamente exibido no console?
O valor exibido será 2.

b) Explique por que isso ocorre. Qual é o nome do fenômeno?
Isso ocorre devido a um fenômeno chamado Coerção Implícita de Tipo (ou Type Casting implícito) que resulta em um Truncamento. A variável valor_inteiro foi declarada como int, o que significa que ela só possui espaço na memória para armazenar números inteiros. Quando você tenta atribuir um valor de ponto flutuante (2.97) a ela, o compilador C descarta automaticamente (trunca) toda a parte fracionária, sem fazer arredondamento.

c) Como este tipo de comportamento pode ser evitado ou controlado?

Para manter a precisão: A variável deve ser declarada com o tipo correto desde o início, como float ou double.

Para arredondamento: Se você precisa que a variável continue sendo int, mas quer arredondar o valor matematicamente (ex: 2.97 para 3), você deve usar funções da biblioteca <math.h>, como round() (arredonda para o mais próximo), ceil() (arredonda para cima) ou floor() (arredonda para baixo). Exemplo: valor_inteiro = round(2.97);.

Para explicitar a intenção: Se o truncamento é intencional, você deve usar o casting explícito para avisar a outros programadores que você sabe o que está fazendo: valor_inteiro = (int)2.97;.

Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas
a) Por que o uso de <conio.h> deve ser evitado?
A biblioteca <conio.h> não faz parte do padrão ANSI C nem do padrão ISO C moderno. Ela foi criada especificamente para compiladores do antigo MS-DOS (como o Turbo C). Usá-la quebra a portabilidade do seu código, pois ele não compilará em sistemas operacionais baseados em Unix (Linux, macOS, servidores modernos).

b) Quais são as funções equivalentes e portáteis de <stdio.h>?
Para entrada e saída de caracteres, a biblioteca padrão C oferece funções excelentes e portáteis como getchar(), putchar(), fgetc(stdin) e a leitura clássica com scanf("%c", &variavel).

c) Trecho de código robusto para ler um caractere:
O maior problema ao ler caracteres no console é o "lixo de buffer" (como o \n deixado ao apertar ENTER na leitura anterior). A maneira mais simples e robusta de ignorar isso com C padrão é colocar um espaço antes do %c no scanf:

C
#include <stdio.h>

int main() {
    char caractere;
    printf("Digite um caractere: ");
    
    // O espaco em branco antes do %c diz ao scanf para ignorar 
    // qualquer espaco, tabulacao ou quebra de linha ('\n') residual.
    scanf(" %c", &caractere); 
    
    printf("Voce digitou: %c\n", caractere);
    return 0;
}
Questão 03. Formatação de Saída em Bases Numéricas e ASCII
A função printf() utiliza especificadores (como %d, %x, %o, %c) para interpretar os bits da variável de diferentes maneiras na hora de exibir na tela.

C
#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    // O mesmo valor da variavel "numero" eh passado 4 vezes 
    // para casar com os 4 especificadores de formato na string.
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", 
           numero, numero, numero, numero);
           
    return 0;
}
Questão 04. Operadores de Atribuição Composta e Precedência
As avaliações ocorrem na ordem estipulada pela precedência do C. Em atribuições múltiplas encadeadas (=, +=, etc), a leitura é feita da direita para a esquerda.

Valores iniciais: a = 1, b = 2, c = 3, d = 4. Estas operações são sequenciais.

a += b + c;

Expressão: a = a + (b + c) => 1 + (2 + 3)

Valor final de a = 6. (Valores atuais: a=6, b=2, c=3, d=4)

b *= c = d + 2;

Resolve da direita para a esquerda. Primeiro: c = 4 + 2. Logo, c passa a valer 6.

Depois: b *= 6 => b = 2 * 6. Logo, b passa a valer 12.

Valores finais de b = 12 e c = 6. (Valores atuais: a=6, b=12, c=6, d=4)

d %= a + a + a;

A soma tem precedência sobre a atribuição: a + a + a = 6 + 6 + 6 = 18.

Então: d %= 18 => d = 4 % 18. O resto de 4 dividido por 18 é 4.

Valor final de d = 4. (Valores atuais: a=6, b=12, c=6, d=4)

d -= c -= b -= a;

Da direita para a esquerda:

b -= a => b = 12 - 6. Logo, b = 6.

c -= b => c = 6 - 6. Logo, c = 0.

d -= c => d = 4 - 0. Logo, d = 4.

Valores finais: d = 4, c = 0, b = 6. (Valores atuais: a=6, b=6, c=0, d=4)

a += b += c += 7;

Da direita para a esquerda:

c += 7 => c = 0 + 7. Logo, c = 7.

b += c => b = 6 + 7. Logo, b = 13.

a += b => a = 6 + 13. Logo, a = 19.

Valores finais: a = 19, b = 13, c = 7.

Questão 05. Avaliação de Expressões Lógicas e Relacionais
Valores iniciais: i = 1, j = 2, k = 3, n = 2, x = 3.3, y = 4.4.
Nota: em C, verdadeiro é 1 e falso é 0.

a) i < j + 3 => 1 < 2 + 3 => 1 < 5. Resultado: 1

b) 2 * i - 7 <= j - 8 => 2 - 7 <= 2 - 8 => -5 <= -6. Resultado: 0

c) -x + y >= 2.0 * y => -3.3 + 4.4 >= 2.0 * 4.4 => 1.1 >= 8.8. Resultado: 0

d) x == y => 3.3 == 4.4. Resultado: 0

e) !(n - j) => !(2 - 2) => !(0). A negação de 0 (falso) é verdadeiro. Resultado: 1

f) !n - j => Aqui a precedência do ! é maior que do -. Portanto: (!2) - 2. Como 2 é verdadeiro, !2 é 0. A conta fica 0 - 2 = -2. Resultado: -2 (Atenção: embora a expressão lógica finalize em -2, a linguagem C avalia qualquer valor diferente de zero como verdadeiro. Mas o resultado aritmético da expressão é -2).

g) i && j && k => 1 && 2 && 3. Todos são não-zero (verdadeiros). Resultado: 1

h) i || j - 3 && k => Precedência: - primeiro, depois &&, por último ||.
1 || (-1 && 3) => O 1 garante que o || seja verdadeiro por curto-circuito. Resultado: 1

i) i < j && 2 >= k => (1 < 2) && (2 >= 3) => 1 && 0. Resultado: 0

j) i == 2 || j == 4 || k == 5 => 0 || 0 || 0. Resultado: 0

Questão 06. Comportamento e Precedência dos Incrementos
a) Diferença entre ++n e m++ e valores impressos:

Trecho A (Prefixado ++n): O incremento acontece antes da atribuição. Primeiro, o valor de n sobe de 5 para 6. Depois, o novo valor (6) é armazenado na variável x.

Impressão: Trecho A: n = 6, x = 6

Trecho B (Pós-fixado m++): O incremento acontece depois de seu valor ser utilizado. A variável y recebe o valor atual de m (5). Imediatamente depois dessa atribuição, m sobe para 6.

Impressão: Trecho B: m = 6, y = 5

b) Comportamento Indefinido no printf:
A instrução printf("%d\t%d\t%d\n", n, n+1, n++); é extremamente perigosa porque a Linguagem C (padrão C11, seção de pontos de sequência) não garante a ordem de avaliação dos argumentos passados para uma função. O compilador está livre para ler os argumentos da esquerda para a direita, ou da direita para a esquerda.

Se um compilador avaliar da direita para a esquerda, ele fará n++ primeiro, alterando o valor base de n para os demais cálculos. Se outro compilador avaliar da esquerda para a direita, ele imprimirá n intocado, fará a soma de n+1, e só então no final vai incrementar. Isso causa o que chamamos de Undefined Behavior (Comportamento Indefinido). A regra de ouro em C é: nunca modifique uma variável e tente lê-la novamente dentro da mesma instrução sem um ponto de sequência.