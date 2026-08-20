#include <stdio.h>

/*Como ideia do projeto, vamos verificar se o numero é positivo, negativo, ou = 0.*/

void main () {
    int x;
    printf("Digite um número: ");
    scanf("%i", x);
    if (x < 0) {
        printf(" %i e negativo", x);
    } else {
        if (x == 0) {
            printf("%i e zero!", x);
        } else {
            printf("%i e positivo", x);
        }
    }
}