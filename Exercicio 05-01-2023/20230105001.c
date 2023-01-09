#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int absdif(int n1, int n2){
	int dif;
	dif = n1 - n2;
	dif = abs(dif);
	printf("diferenca entre os dois numeros: %d \n", dif);
}

float percentual(int a, int b){
	float perc;
	if (b < a){
		perc = (100*b)/a;
		printf("Percentual(%%): %.2f \n", perc);
	}
	else if (b > a){
		perc = (100*a)/b;
		printf("Percentual(%%): %.2f \n", perc);
	}
	else if (b == a){
		perc = 100;
		printf("Percentual(%%): %.2f \n", perc);
	}
}

int scanIntIntervalo(int n){
	printf("Digite um numero: \n");
	scanf("%d", &n);
	if (0 < n && n < 1000){
		return n;
	}else{
		printf("Numero em Intervalo invalido \n");
		exit(1);
	}
}

int main(){
	setlocale(LC_ALL, "");
	int n1, n2;
	n1 = scanIntIntervalo(n1);
	n2 = scanIntIntervalo(n2);
	printf("n1 = %d \nn2 = %d \n", n1, n2);
	percentual(n1,n2);
	absdif(n1, n2);
	
	return 0;
}