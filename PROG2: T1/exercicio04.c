/*
 * 4. Faça um programa que verifique e mostre a soma dos 50 primeiros numeros pares.

**/

#include<stdio.h>

int main()
{
    int i, qtdPares = 0, somaPares = 0;

    // Solucao 1:
    for(i = 0; qtdPares < 2; i++)
    {
        if(i%2 == 0)
        {
            qtdPares++;
            somaPares += i;
        }
    }
    // Solucao 2:
    i = 0;
    while(qtdPares < 50)
    {
        if(i%2 == 0)
        {
            qtdPares++;
            somaPares += i;
        }
        i++;
    }

    printf("Soma dos primeiros 50 numeros pares: %d", somaPares);

    getchar();
    return 0;
}
