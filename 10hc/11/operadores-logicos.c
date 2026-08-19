#include <stdio.h>

void main () {
    // Operador relacional retorna verdadeiro ou falso
    int relacional = 1 == 1;
    // operador de negação inverte o verdadeiro e falso
    int a = !relacional;
    //realizando a impressão
    printf("!a ou !verdadeiro = %i \n", a);

    // operador E
    // operadores relacionais que retornam veradadeiro ou falso
    int relacional2 = (5 > 3);
    int relacional3 = (5 > 4);
    printf("5 > 3 %i \n", relacional2);
    printf("5 > 4 %i \n", relacional3);

    int comparacao_e = relacional2 && relacional3;

    // operador OU
    int comparacao_ou = (5 > 8) || (5 > 3);
    printf("5 > 8 OU 5 > 7: %i", comparacao_ou);
}