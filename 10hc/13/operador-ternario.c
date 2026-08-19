#include <stdio.h>

void main () {
    int x, y, maior;
    printf("Digite dois numeros inteiros: ");
    scanf(" %d %d", &x, &y); // primeiro valor digitado é atribuido ao x, o segundo é atribuido ao y. & = endereço 
    maior = x > y ? x : y; // executando o ternário, a primeira condição executada é de condição x . y)
    // se é verdadeiro retorna x, se for falso, retorna y. O valor que será atribuído ao maior, retorna no printf
    printf("Maior: %d", maior); // o valor retornado é atribuido ao maior, no caso dependendo do que digitar.
}