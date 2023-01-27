/* 1. Ler base e altura de um triângulo. Calcular e escrever a área (area=base*altura/2);*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Este programa lê a area do triangulo
int main (){
    int base, altura, area;

    printf("Base do triangulo: ");
    scanf("%d", &base);

    printf("Altura do triangulo: ");
    scanf("%d", &altura);

    area = (base*altura)/2;

    printf("Area do triangulo :%d", area);

    return 0;
}