#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Pessoa
{

    char nome[50];
    int idade;
    char endereco[150];

};

int main()
{
    char nome[50];
    int idade;
    char endereco[150];
    struct Pessoa pedro;

    printf("Qual seu nome: ");
    setbuf(stdin, NULL);
    scanf("%49[^\n]",pedro.nome);
    printf("\n");

    printf("Qual sua idade: ");
    scanf("%d", &pedro.idade);
    printf("\n");

    printf("Qual seu endereco: ");
    setbuf(stdin, NULL);
    scanf("%149[^\n]",pedro.endereco);
    printf("\n");



    printf("Nome: %s\nIdade: %d\nEndereco: %s\n", pedro.nome, pedro.idade, pedro.endereco);


    return 0;
}
