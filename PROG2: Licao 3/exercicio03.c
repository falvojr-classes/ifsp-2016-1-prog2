#include<stdio.h>

#define CAPACIDADE 10

int main()
{
    int i, numeros[CAPACIDADE];

    printf("Digite %d numeros inteiros!\n\n", CAPACIDADE);

    for(i = 0; i < CAPACIDADE; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nRESULTADO = {  ");
    for(i = CAPACIDADE - 1; i >= 0 ; i--)
    {
        printf("%d  ", numeros[i]);
    }
    printf("}\n");

    getchar();
    return 0;
}
