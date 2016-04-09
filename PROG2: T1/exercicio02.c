/*
 * 2. Faça um programa que imprima um menu com as opções
 * “1–Multiplicar”, “2–Somar”, “3–Subtrair” e “4–Dividir”.
 * Seu programa deve ler a Opção desejada e os valores reais
 * A e B. Com isso, o resultado da operação desejada deve
 * ser impresso.
**/

#include<stdio.h>

int main()
{
    int opcao;
    float a, b;

    printf("1-Multipliar\n2-Somar\n3-Subtrair\n4-Dividir\n\n");
    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite A e B:");
    scanf("%f %f", &a, &b);

    if(opcao == 1)
    {
        float resultado = a * b;
        printf("%.2f x %.2f = %.5f", a, b, resultado);
    }
    else if (opcao == 2)
    {
        float resultado = a + b;
        printf("%.2f + %.2f = %.5f", a, b, resultado);
    }
    else if (opcao == 3)
    {
        float resultado = a - b;
        printf("%.2f - %.2f = %.5f", a, b, resultado);
    }
    else if (opcao == 4)
    {
        if (b == 0)
        {
            printf("Divisor Invalido!");
        }
        else
        {
            float resultado = a / b;
            printf("%.2f / %.2f = %.5f", a, b, resultado);
        }
    }
    else
    {
        printf("Opcao invalida!");
    }

    getchar();
    return 0;
}
