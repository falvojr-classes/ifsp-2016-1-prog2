/**
 * 1. Usando uma estrutura de decisão multipla, implemente um programa que calcule a idade de um usuário
 * e execute as seguintes verificações:
 * a. Caso a idade seja maior ou igual a 18 anos, imprima “Tem mais de 18 anos”;
 * b. Caso a idade seja 16 ou 17 anos, imprima “Tem 16 ou 17 anos!”;
 * c. Caso a idade seja 15 anos ou menos, imprima “Tem 15 anos ou menos!”
**/

#include <stdio.h>

int main( )
{
    int idade;
    int nascimento;

    printf("Qual o ano do seu nascimento?");
    scanf ("%d", &nascimento);
    idade = 2016 - nascimento;

    switch(idade)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        printf("Tem 15 anos ou menos!");
        break;
    case 16:
    case 17:
        printf("Tem 16 ou 17 anos!");
        break;
    default:
        printf("Tem 18 anos ou mais!");
        break;
    }
    getchar();
    return 0;
}
