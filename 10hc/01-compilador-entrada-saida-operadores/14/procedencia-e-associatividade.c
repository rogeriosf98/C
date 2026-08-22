#include <stdio.h>

void main () {
    int a, b, c, d;

    // atribuição procedencia a direita
    d = 5;
    a = b = c = d;

    // operadores unarios procedencia a direita 
    a = -!10;

    // incremendo e decremento nao sao associativos, pois sao realizados ou antes, ou depois da sua sentença
    // em que são declarados
    a++;
    ++a;
}