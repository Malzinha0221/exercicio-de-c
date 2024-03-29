/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
o segundo menor valor na variável do meio, e o maior valor na última variável.

A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int a, b, c, igual;
    printf("Digite tres valores inteiros: \n");
    scanf("%d %d %d", &a, &b, &c);

    igual = ordenar(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);
    if (igual == 1)
    {
        printf("Os tres valores sao iguais\n");
    }
    else
    {
        printf("Existem valores diferentes\n");
    }
    return 0;
}

int ordenar(int *a, int *b, int *c)
{
    int temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a == *b && *b == *c)
    {
        return 1;
    }
    return 0;
}