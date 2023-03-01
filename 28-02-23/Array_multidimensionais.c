/*-----------------------------------------------------------------------------------------------------------------------------------------------
1. O professor têm duas equipes na disciplina, cada equipe está formada por seis alunos identificados pelo nome e o sexo.
Cada aluno obteve uma nota final na disciplina (valor real entre 0 e 10).
a) Crie estruturas de dados baseadas em arrays para trabalhar com as informações da turma:

Uma matriz para os nomes dos alunos das duas equipes. As equipes devem estar em dimensões diferentes.

Uma matriz para o sexo dos alunos das duas equipes. Utilizar um caractere (não uma string) para representar o sexo.

Uma matriz para as notas dos alunos das duas equipes

b) Atribua valores para cada estrutura criada na letra A) (só pode usar uma linha de código para inicializar cada estrutura).

c) Determine e imprima qual equipe tem a maior quantidade de mulheres.

d) Como parte de um processo de seleção para participar de um projeto, se precisa ter nota final maior ou igual de 8.0, e ser do sexo feminino.
 Crie e preencha uma nova estrutura com os nomes das alunas das duas equipes que atendem a essas condições.

e)  Imprimir os nomes das alunas que podem participar do projeto.

f) (Faça uma função que acrescente um ponto para as alunas de uma equipe e use essa função para acrescentar um ponto às alunas da segunda equipe.

g) Faça uma função que permita adicionar um novo aluno em uma das equipes, solicitando as informações do mesmo ao usuário.

---------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome[2][6];
    char sexo[2][6];
    float notas[2][6];
    char feminino[2][6];

    int i, j;
    int qtsmulher_grupo1 = 0;
    int qtsmulher_grupo2 = 0;

    for (i = 0; i < 2; i++)
    {
        printf("\nintegrante do grupo:%d", i + 1);
        for (j = 0; j < 6; j++)
        {
            printf("\nEscreva o nome do integrante%d:", j + 1);
            scanf("%s", &nome[i][j]);
            printf("\nEscreva o sexo do integrante%d:", j + 1);
            scanf("%s", &sexo[i][j]);
            printf("\nEscreva a nota do integrante%d:", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
    printf("\nAs mulheres que vao participar do projeto sao:") for (i = 0; i < 6; i++)
    {
        if (sexo[0][i] == 'M' || sexo[0][i] == 'F' || sexo[0][i] == 'm' || sexo[0][i] == 'f')
        {
            qtsmulher_grupo1++;

            if (notas[0][i] >= 8.0)
            {
                strcpy(feminino[0][i], nome[0][i]);
                printf("\n%s", nome[0][i])
            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        if (sexo[1][i] == 'M' || sexo[1][i] == 'F' || sexo[1][i] == 'm' || sexo[1][i] == 'f')
        {
            qtsmulher_grupo2++;

            if (notas[1][i] >= 8.0)
            {
                strcpy(feminino[1][i], nome[1][i]);
                printf("\n%s", nome[1][i])
            }
        }
        if (qtsmulher_grupo1 > qtsmulher_grupo2)
        {
            printf("Grupo 1 tem mais mulheres");
        }
        else if (qtsmulher_grupo1 < qtsmulher_grupo2)
        {
            printf("Grupo 2 tem mais mulheres");
        }
        else
        {
            printf("O grupo 1 e grupo 2 sao iguais.");
        }

        return 0;
    }
}

