/* 20221215_002. Faça um Programa que peça as 4 notas bimestrais e mostre a média. */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float nota_1,nota_2,nota_3,nota_4,soma,media;

    printf("Escreva a primeira nota: ");
    scanf("%f",&nota_1);

    printf("Escreva a segunda nota: ");
    scanf("%f",&nota_2);

    printf("Escreva a terceira nota: ");
    scanf("%f",&nota_3);

    printf("Escreva a quarta nota: ");
    scanf("%f",&nota_4);

    soma = nota_1+nota_2+nota_3+nota_4;

    media = soma/4;

    printf("A media do aluno eh %.2f", media);

    return 0;
}