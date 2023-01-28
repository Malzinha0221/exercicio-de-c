/* 20221215_010. Tendo como dados de entrada a altura de uma pessoa, 
construa um algoritmo que calcule seu peso ideal, 
usando a seguinte fórmula: (72.7*altura) - 58*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float altura, peso_ideal;

    printf("Quantos metros voce mede?\n = ");
    scanf("%f",&altura);

    peso_ideal = (72.7*altura)-58;

    printf("Seu peso ideal= %.2f", peso_ideal);

    return 0;
}
