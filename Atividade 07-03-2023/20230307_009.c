/* Escreva uma função que recebe uma string de caracteres e uma letra 
e devolve um vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi encontrada) 
e um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas).
 Utilize o retorno de um vetor para retornar os índices e um ponteiro para guardar o tamanho do vetor.*/

 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* encontrar_letra(char* str, char letra, int* tamanho) {
    if (str == NULL || tamanho == NULL) {
        return NULL; // argumentos inválidos
    }
    int n = strlen(str);
    int* indices = (int*) malloc(n * sizeof(int)); // aloca vetor dinamicamente
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == letra) {
            indices[cont] = i;
            cont++;
        }
    }
    *tamanho = cont; // atualiza o tamanho do vetor
    return indices; // retorna o vetor de índices
}

int main() {
    char str[] = "banana";
    char letra = 'a';
    int* indices;
    int tamanho;

    indices = encontrar_letra(str, letra, &tamanho);

    printf("Letra '%c' encontrada em:\n", letra);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", indices[i]);
    }
    printf("\nTotal: %d\n", tamanho);

    free(indices); // libera a memória alocada

    return 0;
}
