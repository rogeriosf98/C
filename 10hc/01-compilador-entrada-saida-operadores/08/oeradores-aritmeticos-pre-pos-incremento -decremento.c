#include <stdio.h>

void main () {
    int a = 5, b = 5, c = 5, d = 5;

    // pre incremento 
    // a = a + 1
    printf("pre-incremento %d \n", ++a);

    // pos incremento
    // a = a + 1  
    printf("pos-incremento %d \n", b++);

    printf("Valores finais: %i %d \n", a,b);
    
    // ao verificar o resultado impresso no terminal, podemos notar
    // que o pre incremento adiciona o valor = 1, antes da sentença
    // e no pos incremento, acontece após a senteça.

    // pre decremento 
    // a = c - 1 
    printf("pre-decremento %d \n", --c);

    // pos decremento
    // a = d - 1  
    printf("pos-decremento %d \n", d--);

    printf("Valores finais: %i %d", c,d);

    // npo decremento temos a mesma lógica do incremento.
    // somente muda de adição, para uma subtração (--).
}