#include <stdio.h>
int main()
{
 float menor, maior, media,cont, soma, numero;
    maior=0;
    media=0;
    soma=0;
    cont=0;
    printf("Digite uma media: ");
    scanf ("%f",&numero);
    menor=numero;
    while(numero >= 0){
        if (numero > maior)
            maior=numero;
        if (numero < menor)
            menor = numero;
        soma += numero;
        cont++;
        printf("Digite uma media: ");
        scanf ("%f",&numero);
    }
    media = soma/cont;
    printf ("\nMenor: %.1f", menor);
    printf ("\nMaior: %.1f", maior);
    printf ("\nMedia: %.1f", media);
}