#include <stdio.h>
#include <math.h>

int solicitarNumero(int numeroRealPositivo){

    if(numeroRealPositivo == 0){

        return 0;

    }
    else if(numeroRealPositivo == 1){

        return 1;

    }
    else{

        printf("Valor fora dos valores!");

    }

}

float arcTan(int numeroRealX){

    float arcoTangente;
    int expoenteDivisor = 1;

    do{

        arcoTangente += (pow(numeroRealX, expoenteDivisor) / expoenteDivisor) - (pow(numeroRealX, expoenteDivisor + 2) / expoenteDivisor + 2);
        expoenteDivisor + 4;

    }while(arcoTangente >= 0.0001);

    return arcoTangente;
}

void imprimirMensagem(){

    int numeroReal, x;
    float arcoTangente;

    printf("Digite [0] ou [1]: ");
    scanf("%d",&numeroReal);

    x = solicitarNumero(numeroReal);
    arcoTangente = arcTan(x);

    printf("Numero real x: %d\n",x);
    printf("Arco tangente de x: %.4f\n",arcoTangente);

}

int main(){

    imprimirMensagem();

}