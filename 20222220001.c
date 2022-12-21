#include <stdio.h>
int main(){

float soma;
float numero;

for(int i = 1; i <=5 ; i++){

    printf("Digite um valor a ser somado: ");
    scanf("%f",&numero);

    soma += numero;

}

printf("O resultado da soma dos valores e: %.2f",soma);

return 0;
}
