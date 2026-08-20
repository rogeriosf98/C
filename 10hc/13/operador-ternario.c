#include <stdio.h>

void main () {
    int x, y, maior, menor;
    printf("Digite dois numeros inteiros: ");
    scanf(" %d %d", &x, &y); 

    // maior = x > y ? x : y;
    if (x > y) {
        maior = x;
        printf(""); // se voce tiver um print, alme de uma condição
        maior = y;
        menor = x;  // se tiver duas condições que vao para redundancia.
    }               // o operador ternário n~çao consegue te entregar o resultado esperado.

    printf("Maior: %d", maior);
}