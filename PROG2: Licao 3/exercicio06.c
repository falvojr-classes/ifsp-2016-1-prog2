/**
 * 6. Crie um programa que gere a mesma saída do exercício anterior, mas agora considerando a seguinte matriz:
 *
 * {
 *   { 'I', 'S', '2', '1' },
 *   { 'F', 'P', '0', '6' }
 * }
 */

#include<stdio.h>

int main()
{
    int i, j, contador;
    char matriz[2][4] =
    {
        { 'I', 'S', '2', '1' },
        { 'F', 'P', '0', '6' }
    };

    contador = 0;

    for(j = 0; j < 4; j++)
    {
        for(i = 0; i < 2; i++)
        {
            printf("%c", matriz[i][j]);
            contador++;
        }
        if(contador == 4)
        {
            printf("\n");
        }
    }

    getchar();
    return 0;
}
