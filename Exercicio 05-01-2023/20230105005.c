#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int fib(int n){
	int i = 1, aux = 1, f[n];
	while (i < n+1){
		if (i <= 2){
			f[i] = 1; 
			i+=1;	
		}
		else{
			aux = f[i-1] + f[i-2];
			f[i] = f[i-2];
			f[i-1] = aux;
			i+=1;
		}
	}
	printf("Numero da %d° posicao: %d \n",n, f[n-1]);
}


int main(){
	setlocale(LC_ALL, "");
	int n;
	printf("Digite a posicao: ");
	scanf("%d", &n);
	fib(n);
	return 0;
}
