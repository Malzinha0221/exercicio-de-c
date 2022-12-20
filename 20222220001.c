#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, n5, soma;
	printf ("Entre com 5 numeros :");
	scanf ( "\n %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
	soma = n1 + n2 + n3 + n4 + n5;
	printf (" A soma de cinco numero: %.2f", soma);
	return 0;
}
