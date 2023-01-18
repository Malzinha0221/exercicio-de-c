#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maior, menor, media, soma = 0, nota,count = 0;

    printf("Nota do aluno: Insira -1 para sair \n");
    scanf("%f",&nota);

    if (nota >= 0){
        maior = nota;
        menor = nota;
    }

    while(nota >= 0){
        if (maior < nota){
            maior = nota;
        }
        if (menor > nota){
            menor = nota;
        }
        soma += nota;
        count++;

        printf("Proxima nota : ");
        scanf("%f",&nota);
    }
    if (count>0){
        media = soma/count;
    }

    printf("A maior nota: %.2f \n", maior);

    printf("A menor nota: %.2f \n", menor);

    printf("A media nota: %.2f \n", media);
    return 0;
}