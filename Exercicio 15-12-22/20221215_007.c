/* 20221215_007.  Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.
C = (5 * (F-32) / 9).*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float graus_Farenheit, graus_Celsius;

    printf("Informe o graus em Farenheit: ");
    scanf("%f", &graus_Farenheit);

    graus_Celsius = (graus_Farenheit-32)*5/9;

    printf("O graus em Celsius = %.1f", graus_Celsius);

    return 0;
}
