/*
 * 1. Faça um programa que leia um Número inteiro entre 1
 * e 12 e mostre o nome do mês correspondente. Caso o
 * valor digitado não estiver nesse intervalo, mostrar
 * a mensagem: “Mês inválido”.
**/

#include<stdio.h>

int main()
{
    int numero;

    printf("Digite um numero entre 1 e 12: ");
    scanf("%d", &numero);

    // Solucao 1:
    switch(numero)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outobro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("Mes Invalido");
        break;
    }

    // Solucao 2:
    if (numero == 1)
    {
        printf("Janeiro");
    }
    else if (numero == 2)
    {
        printf("Fevereiro");
    }
    else if (numero == 3)
    {
        printf("Marco");
    }
    else if (numero == 4)
    {
        printf("Abril");
    }
    else if (numero == 5)
    {
        printf("Maio");
    }
    else if (numero == 6)
    {
        printf("Junho");
    }
    else if (numero == 7)
    {
        printf("Julho");
    }
    else if (numero == 8)
    {
        printf("Agosto");
    }
    else if (numero == 9)
    {
        printf("Setembro");
    }
    else if (numero == 10)
    {
        printf("Outubro");
    }
    else if (numero == 11)
    {
        printf("Novembro");
    }
    else if (numero == 12)
    {
        printf("Dezembro");
    }
    else
    {
        printf("Mes Invalido");
    }

    getchar();
    return 0;
}
