/**
 * 7. Fazer um programa para ler um vetor X de elementos inteiros
 * e positivos, de dimensão N (N <= 10). Criar um vetor Y da seguinte
 * forma: os elementos de Y com índice par receberão os respectivos
 * elementos de X divididos por 2; os elementos com índice ímpar
 * receberão os respectivos elementos de X multiplicados por 3.
 * Escrever o vetor X e o vetor Y.
 */

#include<stdio.h>

int main()
{
    int i, vetorX[5];
    float vetorY[5];

    // Le o Vetor X:
    for(i = 0; i < 5; i++)
    {
        printf("vetorX[%d] = ", i);
        scanf("%d", &vetorX[i]);
    }
    // Calcula o Vetor Y:
    for(i = 0; i < 5; i++)
    {
        if(i%2 == 0)
        {
            vetorY[i] = vetorX[i] / 2.0;
        }
        else
        {
            vetorY[i] = vetorX[i] * 3;
        }
    }
    // Imprime o Vetor X:
    printf("\nImprimindo Vetor X:");
    for(i = 0; i < 5; i++)
    {
        printf("  %d", vetorX[i]);
    }
    // Imprime o Vetor y:
    printf("\n\nImprimindo Vetor Y:");
    for(i = 0; i < 5; i++)
    {
        printf("  %.2f", vetorY[i]);
    }

    printf("\n");
    getchar();
    return 0;
}
