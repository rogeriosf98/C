#include <stdio.h>

void main () {
    char opcao;
    printf("Digita a ou 2b: ");
    scanf("%c", &opcao);
    // opcao deve ser do tipo: int char ou enum
    switch (opcao) 
    {
    case 'a': 
        printf("\n voce digitou a.");
        break;
    case 'b':
        printf("\n voce digitou b.");
        break;
    default:
        printf("\n Você não digitou a nem b");    
    }
}    