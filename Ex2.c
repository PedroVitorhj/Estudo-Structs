#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct
{

    char nome[50];
    int idade;
    char endereco[150];

}Pessoa;

int main()
{
    char nome[50];
    int idade;
    char endereco[150];
    Pessoa pess[50];
    int i = 1;
    bool condicao = false;
    int valor;

    do{
        printf("\nCadastrando a pessoa %d:\n\n",i);

        printf("Qual seu nome: ");
        setbuf(stdin, NULL);
        scanf("%49[^\n]",pess[i].nome);
        printf("\n");

        printf("Qual sua idade: ");
        scanf("%d", &pess[i].idade);
        printf("\n");

        printf("Qual seu endereco: ");
        setbuf(stdin, NULL);
        scanf("%149[^\n]",pess[i].endereco);
        printf("\n");

        i++;

        printf("Para cadastrar mais pessoas digite 1, caso queria sair digite qualquer valor!!: ");
        scanf("%d", &valor);

        if(valor != 1){
            condicao = true;
        }


    }while(condicao == false);


    for(int j = 1; j < i; j++){

         printf("Pessoa %d: \nNome: %s\nIdade: %d\nEndereco: %s\n\n",j, pess[j].nome, pess[j].idade, pess[j].endereco);

    }



    return 0;
}
