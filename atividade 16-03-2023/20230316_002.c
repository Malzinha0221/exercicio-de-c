/*Construa um programa que aloque em tempo de execução (dinamicamente) uma matriz de ordem m x n (linha por coluna) usando só aritmética de ponteiros. Usar o programa para definir a seguinte matriz
1 2 3
4 5 6
a) Imprima os valores da matriz usando aritmética de ponteiros.
b) Imprima os valores da matriz usando indexes.
c) Liberar a área de memória alocada pela matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** pm;
    int linha, coluna, i, j;

printf("Digite o a quantidade de linhas da matriz: ");
scanf("%d", &linha);
printf("Digite a quantidade de colunas da matriz: ");
scanf("%d", &coluna);

// ALOCANDO ESPA�O:
pm = (int**) malloc(linha*sizeof(int*));
for (i = 0; i < linha; i++){
pm[i] = (int*) malloc(coluna*sizeof(int));
}
printf("\n");

//ENTRADA DE DADOS:
for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
    printf("Digite o valor %dx%d: ", i+1, j+1);
    scanf("%d", (*(pm+i)+j));
    }
}
printf("\n\n");

//PRINTANDO COM ARITMETICA DE PONTEIROS:
for (i = 0; i < linha; i++){
    for (j = 0; j < coluna; j++){
        printf("%d ", *(*(pm+i)+j));
    }
    printf("\n");
}


// PRINTANDO POR INDICE:
printf("\n\nIndice: \n\n");
for (i = 0; i < linha; i++){
    for(j = 0; j < coluna; j++){
        printf("%d ", pm[i][j]);
    }
    printf("\n");
}

//LIBERANDO MEMORIA:
free(pm);

    return 0;
}