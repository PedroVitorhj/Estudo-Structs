#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct
{
    int matricula;
    char nome[50];
    float notas[4];

} Aluno;

int main()
{
    char nome[50];
    int idade;
    char endereco[150];
    Aluno aluno[5];
    int i = 1;
    float media[5];
    float soma = 0;

    do
    {
        printf("\nCadastrando aluno %d:\n\n",i);

        printf("Qual o numero da matricula do aluno: ");
        scanf("%d", &aluno[i].matricula);
        printf("\n");

        printf("Nome do aluno: ");
        setbuf(stdin, NULL);
        scanf("%49[^\n]",aluno[i].nome);
        printf("\n");

        for(int j = 0; j < 4; j++)
        {
            printf("Cadastrar nota %d: ",j);
            scanf("%f", &aluno[i].notas[j]);
            printf("\n");
            soma += aluno[i].notas[j];

        }
        media[i] = soma / 4;
        soma = 0;

        i++;

    }
    while(i != 6);


    for(int j = 1; j < i; j++)
    {
        printf("\nPessoa %d: \n\nNome: %s\nMatricula: %d\n",j,aluno[j].nome, aluno[j].matricula);

        for(int k = 0; k < 4; k++){

            printf("Nota %d do aluno %d: %.2f\n", k, j, aluno[j].notas[k]);

        }

        printf("Media: %.2f\n",media[j]);

        if(media[j] >= 6){
            printf("Aluno aprovado\n");
        }
        else if(media[j] >=4 && media < 6){
            printf("Aluno em recuperacao\n");
        }
        else{
            printf("Aluno reprovado\n");
        }

    }



    return 0;
}
