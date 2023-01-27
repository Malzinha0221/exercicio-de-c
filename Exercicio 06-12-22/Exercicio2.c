/*2. Ler nome, sexo e idade de uma pessoa e verificar se ela é mulher;*/


// Este progr
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int idade;
    char nome[30];
    char sexo[2];

    printf("Qual eh seu nome ?");
    scanf(" %s", &nome );

    printf("Qual eh o sexo: Escreva H = Homem ou M = Mulher: ");
    scanf(" %s", &sexo);

    printf("Qual eh a sua idade? ");
    scanf(" %d", &idade);

    if (sexo == "H")
    {
        printf("Nao eh mulher", sexo);
    }
    else
    {
        printf("Eh mulher", sexo);
    }
    

    return 0;
}
