/* 20221215_003. Faça um Programa que converta metros para centímetros. */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float metros;
    int centimetros;

    printf("Qual eh a medida em metros? ");
    scanf("%f",&metros);

    centimetros = metros*100;

    printf("A medida em metros eh %d centimetros", centimetros);

    return 0;
}