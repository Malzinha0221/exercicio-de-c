/* 
20221215_011.  Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês, 
sabendo-se que são descontados 11% para o Imposto de Renda,
 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
Quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido (Salário Líquido = Salário Bruto - Descontos)*/

#include <stdio.h>
#include <stdlib.h>
#define IR 0.11
#define INSS 0.08
#define Sindicato 0.05
int main(int argc, char const *argv[])
{
    float ganha_hora, total_salario, salario_liquido;
    int hora_mes;


    printf("Quanto voce ganha por hora? ");
    scanf("%f", &ganha_hora);

    printf("Quantas horas voce trabalha por mes? ");
    scanf("%d", &hora_mes);

    total_salario = ganha_hora*hora_mes;
    salario_liquido = total_salario - (total_salario*IR) - (total_salario*INSS) - (total_salario*Sindicato);

    printf("\nSeu salario = R$%.2f", total_salario);
    printf("\nVoce pagou de INNS = R$%.2f", total_salario*IR);
    printf("\nVoce pagou ao sindicato = R$%.2f", total_salario*Sindicato);
    printf("\nSeu salario liquido = R$%.2f", salario_liquido);

    return 0;
}
