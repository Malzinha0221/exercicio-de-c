/* 4. Faça um algoritmo que leia o valor de uma conta e calcule a porcentagem do
garçom*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor_conta, porcentagem_garcom, valor_total;

    printf("Qual eh o valor da conta: ");
    scanf("%d", &valor_conta);

    printf("Qual eh a porcentagem do garcom: ");
    scanf("%d", &porcentagem_garcom);

    valor_total = valor_conta * porcentagem_garcom/100;

    printf("Valor do garcom: %d", valor_total);
    return 0;
}
