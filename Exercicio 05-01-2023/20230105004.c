#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int fat(int n){
	int i, count = 1;
	for(i = 1 ; i < n+1; i++){
		count *= i;
	}
	printf("Fatorial de %d!: %d", n, count);
}


int main(){
	setlocale(LC_ALL, "");
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	fat(n);
	
	return 0;
}
