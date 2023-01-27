/* 3. Ler salario de uma pessoa e calcule o novo salário considerando que esta pessoa
terá um ajuste de 10%*/

#include <stdio.h>
#include<stdlib.h>
#define PERCENTAGEM .10
 int main(int argc, char const *argv[])
 {

    float salario, novo_salario;

    printf("Qual eh o seu salario ? :");
    scanf("%f ", &salario);

    novo_salario = salario*PERCENTAGEM;


    printf("O novo salario sera: %.2f ", salario + novo_salario);

    return 0;
}