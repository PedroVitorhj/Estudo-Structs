#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct
{
    int matricula;
    char nome[50];
    float notaprova[2];
    float notatraba[2];

} Aluno;

int main()
{
    Aluno aluno[50];
    int i = 1;
    float media[50];
    float somaprova = 0;
    float somatraba = 0;
    bool condicao = false;
    int valor;

    do{
        printf("\nCadastrando aluno %d:\n\n",i);

        printf("Qual o numero da matricula do aluno: ");
        scanf("%d", &aluno[i].matricula);
        printf("\n");

        printf("Nome do aluno: ");
        setbuf(stdin, NULL);
        scanf("%49[^\n]",aluno[i].nome);
        printf("\n");

        for(int j = 1; j <= 2; j++)
        {
            printf("Cadastrar nota prova %d: ",j);
            scanf("%f", &aluno[i].notaprova[j]);
            printf("\n");
            somaprova += aluno[i].notaprova[j];

        }
        for(int j = 1; j <= 2; j++)
        {
            printf("Cadastrar nota trabalho %d: ",j);
            scanf("%f", &aluno[i].notatraba[j]);
            printf("\n");
            somatraba += aluno[i].notatraba[j];

        }

        media[i] = ((somaprova/2)*0.6) + ((somatraba/2)*0.4);
        somaprova = 0;
        somatraba = 0;
        i++;

        printf("Para cadastrar mais pessoas digite 1, caso queria sair digite qualquer valor!!: ");
        scanf("%d", &valor);

        if(valor != 1){
            condicao = true;
        }


    }while(condicao == false);



    for(int j = 1; j < i; j++)
    {
        printf("\nPessoa %d: \n\nNome: %s\nMatricula: %d\n",j,aluno[j].nome, aluno[j].matricula);

        for(int k = 1; k <= 2; k++){

            printf("Nota prova %d do aluno %d: %.2f\n", k, j, aluno[j].notaprova[k]);

        }
        for(int k = 1; k <= 2; k++){

            printf("Nota trabalho %d do aluno %d: %.2f\n", k, j, aluno[j].notatraba[k]);

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
