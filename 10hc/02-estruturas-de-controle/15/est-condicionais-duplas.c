#include <stdio.h>

/*Como em C não existe um tipo booleano (verdadeiro/falso), a condição do comando if considera que 0 (zero) é falso e qualquer coisa diferente disso é verdadeiro. Lembre-se que os operadores relacionais (>, >=, <, <=, ==, !=) e os booleanos (&&, ||, !) resultam em 1 (verdadeiro) ou 0 (falso);
Operadores aritméticos (=, _, *, /, %) resultam no valor da operação;
Operadores de atribuição (=, ++, --, operação=) retornam o valore atribuido.  */

void main () {
    int x;
    printf("Digite um numero inteiro: ");
    scanf(" %d", &x);
    if (x % 2 == 0) {
        printf("%d e um numero par. \n", x);
    } else {
        printf("%d e impar. \n", x);
    }
}