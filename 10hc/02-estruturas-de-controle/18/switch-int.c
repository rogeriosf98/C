#include <stdio.h>

void main () {
    int opcao;
    printf("Digita 1 ou 2: ");
    scanf("%d", &opcao);
    // opcao deve ser do tipo: int char ou enum
    switch (opcao) 
    {
    case 1: 
        printf("\n voce digitou 1.");
        break;
    case 2:
        printf("\n voce digitou 2.");
        break;
    default:
        printf("\n Você não digitou 1 nem 2");    
    }
}    