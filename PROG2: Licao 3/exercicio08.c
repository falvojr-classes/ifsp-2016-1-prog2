/**
 * 8. Fazer um programa que leia um vetor de 8 posições
 * e troque os 4 primeiros valores pelos 4 últimos e
 * vice-e-versa. Escreva ao final o vetor obtido.
 */

#include<stdio.h>

int main()
{
    int i, vetorA[8], vetorB[8];

    for(i = 0; i < 8; i++) {
        printf("vetorA[%d]=", i);
        scanf("%d", &vetorA[i]);
        if(i < 4) {
            vetorB[i + 4] = vetorA[i];
        } else {
            vetorB[i - 4] = vetorA[i];
        }
    }

    for(i = 0; i < 8; i++) {
        printf("%d  ", vetorB[i]);
    }

    getchar();
    return 0;
}
