#include <stdio.h>

// criar um programa que imprime de 1 até 10

void main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("O valor de i e %d\n", i);
    }
}

// outra forma do for, é fazendo a declaração da variável dentro do for, no contador. Mas fazendo isso, a variavel nao é valida fora do loop for.
// se tentar imprimir a variavel fora do loop, da erro, que não existe a variavel.

// void main() {
//     for (int i = 0; i < 10; i++) {
//         printf("O valor de i e %d\n", i);
//     }
// }

// 