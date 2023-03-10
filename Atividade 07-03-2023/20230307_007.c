/* Escreva uma função que receba um vetor inteiro v[0..n-1] e os endereços de duas variáveis inteiras, digamos min e max,
 e deposite nessas variáveis o valor do elemento mínimo e o valor do elemento máximo do vetor.
  Escreva também uma função main que use a função.
*/
#include <stdio.h>

void min_max(int* v, int n, int* min, int* max) {
    if (v == NULL || min == NULL || max == NULL || n <= 0) {
        return; // argumentos inválidos
    }
    *min = v[0]; // inicializa min e max com o primeiro elemento do vetor
    *max = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i]; // atualiza min se encontrar um elemento menor
        }
        if (v[i] > *max) {
            *max = v[i]; // atualiza max se encontrar um elemento maior
        }
    }
}
int main() {
    int v[] = {4, 2, 1, 5, 3};
    int n = 5;
    int min, max;

    min_max(v, n, &min, &max);

    printf("Mínimo: %d\n", min);
    printf("Máximo: %d\n", max);

    return 0;
}
