/* Crie um ponteiro do tipo char e leia-o do teclado utilizando scanf e um identificador de
string. Em seguida, faça um laço for para imprimir a string lida do teclado. */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char *pont;

    scanf("%s", pont);

    int i;

    printf("\nMostre a string que foi escrita: ");
    for ( i = 0;pont[i]!='\0' ; i++)
    {
        printf("%c", pont[i]);
    }
    
    return 0;
}
