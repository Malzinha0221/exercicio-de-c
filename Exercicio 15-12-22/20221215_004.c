/* 20221215_004. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área. */

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14159

int main(int argc, char const *argv[]){

    int raio; 
    float area;

    printf("Digite o valor do raio: ");
    scanf("%d",&raio);

    area = raio*raio*PI;

    printf("A area do circulo:%.2f", area);

    return 0;
}