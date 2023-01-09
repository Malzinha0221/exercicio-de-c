#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


float tipoParto(int qs, float ps){
	float mes;
	mes = qs/4;
	if (ps < 100 || qs < 28){
		printf("Parto nao devera ser realizado, reavaliar clinicamente \n");
		exit(1);
	}
	else if (ps > 2500 && mes > 7 ){
		printf("Parto Normal \n");
		exit(1);
	}
	else if (ps > 2500 && mes < 7 ){
		printf("Parto Cesariana \n");
		exit(1);
	}
	else if (ps > 1500 && ps < 2000 && mes == 9){
		printf("Parto Normal \n");
		exit(1);
	}else{
		printf("Parto Cesariana \n");
		exit(1);
	}
}

int scanPesoSemana(int qsemanas, float peso){
	printf("Digite o peso do feto (g): \n");
	scanf("%f", &peso);
	printf("Digite as semanas de gestacao: \n");
	scanf("%d", &qsemanas);
	tipoParto(qsemanas, peso);
}

int main(){
	setlocale(LC_ALL, "");
	int qsemanas;
	float peso;
	scanPesoSemana(peso, qsemanas);
	
	return 0;
}
