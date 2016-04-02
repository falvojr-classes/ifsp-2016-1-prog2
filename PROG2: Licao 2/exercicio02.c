#include<stdio.h>

int main()
{
    int i, restoDivisao, soma = 0;

    printf("Divisores de 7 entre 100 e 200:\n\n");

    for(i = 100; i <= 200; i++)
    {
        restoDivisao = i%7;
        if (restoDivisao == 0)
        {
            printf("%d\n", i);
            soma = soma + i; // equivalente: soma += i;
        }
    }

    printf("A soma dos multiplos de 7 eh: %d", soma);

    getchar();
    return 0;
}
