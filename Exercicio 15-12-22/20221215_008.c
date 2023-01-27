/* 20221215_008.  Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit. */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float graus_Celsius, graus_Farenheit;

    printf("Informe o graus em Celsius: ");
    scanf("%f", &graus_Celsius);

    graus_Farenheit = (graus_Celsius*9)/5+32;

    printf("O graus em Celsius = %.1f", graus_Farenheit);

    return 0;
}