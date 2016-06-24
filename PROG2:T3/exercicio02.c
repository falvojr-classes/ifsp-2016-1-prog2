/**
 * 2. Fazer um programa para ler uma matriz 3x3 de elementos inteiros. Em seguida, calcular e
 * mostrar quantos de seus elementos são positivos, quantos são negativos e quantos são
 * nulos (iguais a zero).
**/

#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j, qtdNulos, qtdPositivos, qtdNegativos;

    qtdNulos = 0;
    qtdNegativos = 0;
    qtdPositivos = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Matriz[%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 0)
            {
                qtdPositivos++;
            }
            else if (matriz[i][j] < 0)
            {
                qtdNegativos++;
            }
            else
            {
                qtdNulos++;
            }
        }
    }

    printf("\nQuantidade de posivitos: %d\n", qtdPositivos);
    printf("Quantidade de negativos: %d\n", qtdNegativos);
    printf("Quantidade de nulos: %d\n", qtdNulos);

    getchar();
    return 0;
}
