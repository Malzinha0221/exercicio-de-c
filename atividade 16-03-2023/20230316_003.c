/*Desenvolva um programa que calcule a soma de duas matrizes MxN de números reais (double).
 A implementação deste programa deve considerar as dimensões fornecida pelo usuário 
 (Dica: represente a matriz através de variáveis do tipo double **, usando alocação dinâmica de memória)*/

 #include <stdio.h>
#include <stdlib.h>

int main()
{
    double** mat1;
    double** mat2;
    int linha, coluna, i, j;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linha);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &coluna);

//ALOCANDO ESPA�O PARA AMBAS AS MATRIZES:
    mat1 = (double**) malloc(linha*sizeof(double*));
    for (i = 0; i < linha; i++){
        mat1[i] = (double**) malloc(coluna*sizeof(double*));
    }

    mat2 = (double**) malloc(linha*sizeof(double*));
    for (i = 0; i < linha; i++){
        mat2[i] = (double**) malloc(coluna*sizeof(double*));
    }

// PRIMEIRA MATRIZ:

    printf("\n--------------- Digite os elementos da primeira matriz ------------------- \n\n");
    for (i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Digite o elemento %dx%d da matriz: ", i+1, j+1);
        scanf("%lf", (*(mat1+i)+j));
}
    }

     printf("\nPRIMEIRA MATRIZ: \n");
     for (i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%1.0lf ", *(*(mat1+i)+j));
}
printf("\n");
    }


// SEGUNDA MATRIZ:

      printf("\n-------------- Digite os elementos da segunda matriz --------------------- \n\n");

    for (i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Digite o elemento %dx%d da matriz: ", i+1, j+1);
        scanf("%lf", (*(mat2+i)+j));
}
    }

     printf("\nSEGUNDA MATRIZ: \n");
     for (i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%1.0lf ", *(*(mat2+i)+j));
}
printf("\n");
    }


// SOMA DAS MATRIZES:

  printf("\n------------------------- SOMA ---------------------------------------------- \n\n");

 for (i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%1.0lf ", *(*(mat2+i)+j)+(*(*(mat1+i)+j)));
}
printf("\n");
    }

    return 0;
}