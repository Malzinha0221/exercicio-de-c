#include <stdio.h>
#include <math.h>

int funcao1(){
    int num = 0, x = 0;
    do {
        printf("digite um numero: ");
        scanf("%d", &num);
        if(num > 0) {
            x = num;
        }
    } while (num <= 0);
    return x;
}

int hiperfatorial(int num) {
    int hf = 1;
    for (int i = 1; i <= num; i++) {
        hf *= pow(i, i);
    }
    return hf;
}

void funcao3(int numero, int hf) {
    printf("\no hiperfatorial de %d eh igual a %d.\n", numero, hf);
}

int main(){
    int numero;
    int hf;
    numero = funcao1();
    hf = hiperfatorial(numero);
    funcao3(numero, hf);
    return 0;
}