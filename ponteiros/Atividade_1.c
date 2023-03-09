/* Crie um programa que leia uma variavel inteira do teclado e defina um ponteiro que aponte
para essa variavel. Depois, mostre na tela o valor associando ao endereço guardado
pelo ponteiro e o endereço em si 
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int valor;
    
    printf("Escreva um valor qualquer: ");
    scanf("%d", &valor);

    int *pont = NULL;

    pont = &valor; // endereço da minha variavel valor

    printf("x = %d\n", *pont);
    printf("&valor = %d\n", pont);
    return 0;
}
