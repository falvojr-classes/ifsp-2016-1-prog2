/**
 * 1. Faça um programa que escreva a tabuada de um número inteiro fornecido.
**/

#include<stdio.h>

int main()
{
    int numero, i;

    printf("Digite um numero para impressao de sua tabuada: ");
    scanf("%d", &numero);

    printf("\nFOR:\n");
    for(i = 1; i <= 10; i++)
    {
        int resultado = numero * i;
        printf("%dx%d=%d\n", numero, i, resultado);
    }

    printf("\nWHILE:\n");
    i = 1;
    while(i <= 10)
    {
        int resultado = numero * i;
        printf("%dx%d=%d\n", numero, i, resultado);
        i++;
    }

    printf("\nDO WHILE:\n");
    i = 1;
    do
    {
        int resultado = numero * i;
        printf("%dx%d=%d\n", numero, i, resultado);
        i++;
    }
    while (i <= 10);

    getchar();
    return 0;
}
