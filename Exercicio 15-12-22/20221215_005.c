/* 20221215_005. Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int lado, area_quadrado, dobro_quadrado;

    printf("Qual o tamanho do lado do quadrado? ");// os lados do quadrado são compostos por: base e altura. 
    scanf("%d",&lado);

    area_quadrado = lado*lado;

    printf("Area do quadrado=%d\n", area_quadrado);

    dobro_quadrado = area_quadrado*2;

    printf("O doblo do quadrado=%d\n", dobro_quadrado);

    return 0;
}
