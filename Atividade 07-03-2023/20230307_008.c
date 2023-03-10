/*  Escreva uma função chamada troca que troca os valores dos parâmetros recebidos.
 Sua assinatura deve ser: void troca(float *a, float *b);
*/
#include<stdio.h>
void TrocaValor(float *p, float *q){
    float valor1, valor2;

    printf("\n");

    printf("Escreva um numero para valor1:");
    scanf("%f",&valor1);

    p = &valor1;

    printf("Escreva um numero para valor2:");
    scanf("%f",&valor2);

    q = &valor2;

    printf("Depois:\n");
    printf("Valor1 = %.2f e Valor2 = %.2f", *p, *q);

}

int main()
{
    float valor1, valor2;
    float *p, *q;

    printf("Escreva outro numero para valor1:");
    scanf("%f",&valor1);

    printf("Escreva outro numero para valor2:");
    scanf("%f",&valor2);

    printf("Antes:\n");
    printf("Valor1 = %.2f e Valor2 = %.2f", valor1, valor2);

    TrocaValor(p, q);
    
    return 0;
}
