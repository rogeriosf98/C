#include <stdio.h>

void main () {
    // Operadores aritmeticos
    int a = 1, b = -2, c = 3;
    // positivo
    printf("Positivo 1 e: %i \n",+a);
    printf("Positivo (-1) e: %i \n",+b);
    // negativo
    printf("negativo (1) e: %i \n",-a);
    printf("Negativo (-2) e: %i \n",-b);
    //adicao
    printf("Adição 1 + (-2) e: %i \n",a + b);
    // subtração
    printf("Subtração 1 - (-2) e: %i \n",a - b);
    //divisão 
    printf("Divisão (-2) / 1 e: %i \n", b / a);
    //multiplicação
    printf("Multiplicação (-2) * 3 E: %i \n", b * c);
    // modulo
    printf("Resto da divisão de 3 e: %i \n", c%2);
}