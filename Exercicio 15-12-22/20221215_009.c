/* 20221215_009.  Faça um Programa que peça 2 números inteiros e um número real. 
Calcule e mostre: o produto do dobro do primeiro com metade do segundo. 
a soma do triplo do primeiro com o terceiro. 
o terceiro elevado ao cubo.*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int primeiro_inteiro;
    int segundo_inteiro;
    float numero_real;
    float calculo_1,calculo_2,calculo_3;

    printf("Escreva o primeiro inteiro: ");
    scanf("%d", &primeiro_inteiro);

    printf("Escreva o segundo inteiro: ");
    scanf("%d", &segundo_inteiro);

    printf("Escreva o numero real: ");
    scanf("%f", &numero_real);

    calculo_1 = 2*primeiro_inteiro+segundo_inteiro*0.5;
    calculo_2 = (primeiro_inteiro*3)+numero_real;
    calculo_3 = numero_real*numero_real*numero_real;

    printf("%d", calculo_1);
    printf("\n%.2f", calculo_2);
    printf("\n%.2f", calculo_3);

    return 0;
}