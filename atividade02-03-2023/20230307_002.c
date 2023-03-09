#include<stdio.h>
#include<stdlib.h>
/* Escreva uma função que encontra um valor em um vetor de inteiros e
 retorna um ponteiro para o primeiro endereço onde este valor foi encontrado ou NULL caso o valor não esteja no vetor;
- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final)
 e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. 
Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar  e imprimir os endereços de memória de todas as ocorrências do valor 2,
 em um laço, até que todo o vetor tenha sido pesquisado.
- Defina a constante NULL se necessário.
*/

int* EncontrarNumero(int* inicio, int* fim, int valor){
    while (inicio != fim){
        if (*inicio == valor){
            return inicio;
        }
        inicio++;
    }
    return NULL;
}

int main(){
    int vetor[] = {1,5, 7, 2, 2, 5, 2, 9, 9, 2};
    const int SIZE = sizeof(vetor) / sizeof(vetor[0]);
    int* inicio = &vetor[0];
    int* final = &vetor[SIZE-1];
    int valor = 2;

    int* endereco_valor = NULL;
    while ((endereco_valor = EncontrarNumero(inicio,final,2)) != NULL){
        printf("Valor 2 encontrado no endereco %p\n",endereco_valor);
        inicio = endereco_valor + 1;
    }
    
    return 0;
}
