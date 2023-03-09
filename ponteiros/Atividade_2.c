/* Elabore um códico que leia um inteiro "x" do teclado e defina um ponteiro para essa variavel.
Depois, modifique o valor de "x" por meio do ponteiro e mostre na tela o valor de "x". */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    int *pont = NULL;
    pont = &x;

    *pont = 20;

    printf("x = %d\n", *pont);
    printf("&x = %d\n", pont);
    return 0;
}
