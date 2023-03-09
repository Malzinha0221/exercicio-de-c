#include <stdio.h>
/* atividade 1;
Escreva uma função que imprime os elementos de um vetor de float a partir de um endereço inicial (ponteiro) até um endereço final;
 A função recebe como parâmetros dois ponteiros para float (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada com três vetores de tamanhos e conteúdos diferentes;
- A função main deve imprimir duas partes distintas de cada um dos três vetores, utilizando a função criada.
*/

void SomaVetores (float *p, float *q)
{
    for (p; p <= q; p++)
        printf("%.2f\n", *p);
}

int main()
{
    float vetor1[] = {1.2, 2.4, 3.7, 3.0, 9.1};

    float vetor2[] = {2.4, 9.0, 3.0,0.0, 10.0};

    float vetor3[] = {9.0, 10.0, 5.8, 7.0, 5.2};

    printf("Imprima o primeiro vetor: \n");

    SomaVetores(&vetor1[0], &vetor1[3]);

    printf("Imprima o segundo vetor: \n");

    SomaVetores(&vetor2[0], &vetor2[3]);

    printf("Imprima o ultimo vetor: \n");

    SomaVetores(&vetor3[0], &vetor3[3]);

    return 0;
}