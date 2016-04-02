#include <stdio.h>
#include <ctype.h>

int main()
{
    char resposta;

    printf("Digite P para parar:\n");

    do
    {
        scanf("\n%c",&resposta);
        resposta = toupper(resposta);
    }
    while (resposta != 'P');

    printf("\nVoce digitou P, programa encerrado");

    getchar();
    return 0;
}
