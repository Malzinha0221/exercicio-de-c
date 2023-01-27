/* 20221215_006.  Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês.*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float ganha_hora, total_salario;
    int hora_mes;


    printf("Quanto voce ganha por hora? ");
    scanf("%f", &ganha_hora);

    printf("Quantas horas voce trabalha por mes? ");
    scanf("%d", &hora_mes);

    total_salario = ganha_hora*hora_mes;

    printf("Seu salario: R$%.2f", total_salario);

    return 0;
}
