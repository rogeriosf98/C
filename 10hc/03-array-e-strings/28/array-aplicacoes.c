#include <stdio.h>
#define qt 10 // o mais correto é utilizar o #define, por questão de processamento e execução, que pode falahar por varios motivos

void main()
{   
    // const int qt = 10;
    float array[qt];
    float media = 0;
    for (int i = 0; i < qt; i++)
    {
        printf("\nDigite um numero que vai ser armazenado na posicao %d: \n", i);
        scanf(" %f", &array[i]);
        media += array[i];
        // media = media + array[i];
    }
    media = media / qt;
    printf("\nMedia: %f\n", media);
}