/* Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a soma em um terceiro array.
 Caso o tamanho do primeiro e segundo array seja diferente então a função retornará ZERO (0).
  Caso a função seja concluída com sucesso a mesma deve retornar o valor UM (1).
   Utilize aritmética de ponteiros para manipulação do array.*/


#include<stdio.h>

int soma_arrays(float* array1, float* array2, float* resultado, int tamanho) {
    if (array1 == NULL || array2 == NULL || resultado == NULL) {
        return 0; // pelo menos um dos arrays é nulo
    }
    if (tamanho <= 0) {
        return 0; // tamanho inválido
    }
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = array1[i] + array2[i];
    }
    return 1; // sucesso
}

int main() {
    float array1[] = {1.0, 2.0, 3.0};
    float array2[] = {4.0, 5.0, 6.0};
    float resultado[3];
    int tamanho = 3;

    int sucesso = soma_arrays(array1, array2, resultado, tamanho);

    if (sucesso) {
        printf("Resultado: [%.2f, %.2f, %.2f]\n", resultado[0], resultado[1], resultado[2]);
    } else {
        printf("Erro: os arrays têm tamanhos diferentes ou um dos arrays é nulo.\n");
    }

    return 0;
}
