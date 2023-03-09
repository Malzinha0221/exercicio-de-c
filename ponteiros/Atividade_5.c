/* Crie um programa que leia um array de float contendo 10 elementos. Em seguida, imprima
endereço de cada posição desse array. */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float array[10];
    int i;
    float *pont;

    for ( i = 0; i < 10; i++)
    {
        scanf("%f", &array[i]);
    }
    
    pont = array;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", &pont[i]);
    }
    
    return 0;
}
