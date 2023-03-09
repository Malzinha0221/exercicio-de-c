/* Crie um programa que leia um velor de inteiros de 5 posições e defina um ponteiro para
esse vetor. Depois, por meio do ponteiro, imprina todas as posições na tela.  */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int vet[5];
    int i;

    for (i=0;i<5;i++)
    {
        scanf("%d", &vet[i]);
    }
    

    int *pont = vet;

    printf("\nMostre o valor imprimido: ");

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", pont[i]);
    }
    
    return 0;
}
