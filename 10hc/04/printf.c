#include <stdio.h>

void main () {
    //caracteres
    char nome_da_variavel = 'a'; // -127 127
    unsigned char variavel4; // 0 255 
    printf("Imprimindo a variável do tipo char: %c \n", nome_da_variavel);
    printf("texto %c texto %c \n", nome_da_variavel, variavel4);
    
    //numeros inteiros
    short int nome_da_variavel2;
    int nome_da_variavel3;
    long int nome_da_variavel4;
    printf("Short int: %i \n", nome_da_variavel2);
    printf("int: %i \n", nome_da_variavel3);
    printf("Long Int: %li \n",nome_da_variavel4);
    printf("%i - %i - %li \n", nome_da_variavel2, nome_da_variavel3, nome_da_variavel4); // assim você faz todas de uma só vez. 

    unsigned short int variavel1;
    unsigned int variavel2;    // Para unsigned, só utilizar %u, ou %lu
    unsigned long int variavel3;
    printf("u Short int: %u \n", variavel1);
    printf("u Int: %u \n", variavel2);
    printf("u Long Int: %lu \n", variavel3); //usa lu

    // numeros reais
    float nome_da_variavel5 = 3.9f; // colocar f no final, pra nao interp como double
    double nome_da_variavel6 = 3.4;
    long double nome_da_variavel7 = 3.9e-23L;
    printf("Float: %f \n", nome_da_variavel5);
    printf("Double: %f \n", nome_da_variavel6);
    printf("Long Double: %e \n", nome_da_variavel7); // %e de notação científica, p/ long double. usa %le

    //constante nomeada
    const int max = 100;
    printf("Constante int: %i", max);

    // impressão de endereços da memoria
    int a;
    printf("endereço da variavel a: %p",&a);
}