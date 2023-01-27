/*20221215_001. Faça um Programa que peça dois números e imprima a soma.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numero_1,numero_2,soma;
    
    printf("Escreva o primeiro numero:");
    scanf("%d",&numero_1);

    printf("Escreva o segundo numero:");
    scanf("%d",&numero_2);

    soma = numero_1+numero_2;

    printf("A soma de %d e %d eh %d",numero_1,numero_2,soma);

    
    return 0;
}