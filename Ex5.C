#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 6

typedef struct {
char nome[50];
data dataNasc;
int idade;
} pessoa;

typedef struct {
int dia;
int mes;
int ano;
} data;



int main() {

int quant = 0;

printf("Quantas pessoas serao armazenadas? ");
scanf("%d", &quant);

data dataHoje;
pessoa pessoas[quant];
int i;
int idadeMaior, idadeMenor;

printf("Que dia e hoje? ");
scanf("%d", &dataHoje.dia);
printf("Que mes estamos? ");
scanf("%d", &dataHoje.mes);
printf("Em que ano estamos? ");
scanf("%d", &dataHoje.ano);
printf("Estamos no dia: %d/%d/%d", dataHoje.dia, dataHoje.mes, dataHoje.ano);

for (i=0; i<quant; i++) {
	printf("\nNome da pessoa %d a ser cadastrada: ", i + 1);
	fflush(stdin);
	gets(pessoas[i].nome);
	printf("Data de nascimento (dia): ");
	scanf("%d", &pessoas[i].dataNasc.dia);
	printf("Data de nascimento (mes): ");
	scanf("%d", &pessoas[i].dataNasc.mes);
	printf("Data de nascimento (ano): ");
	scanf("%d", &pessoas[i].dataNasc.ano);

	pessoas[i].idade = dataHoje.ano - pessoas[i].dataNasc.ano;

	if ((dataHoje.mes - pessoas[i].dataNasc.mes < 0) || (dataHoje.mes - pessoas[i].dataNasc.mes == 0 && dataHoje.dia - pessoas[i].dataNasc.dia < 0)) {
	
		pessoas[i].idade--;

	}
}

idadeMaior = idadeMenor = 0;

for (i=0; i<quant; i++) {
	if (pessoas[i].idade > pessoas[idadeMaior].idade) {
		idadeMaior = i;
	} else if (pessoas[i].idade < pessoas[idadeMenor].idade) {
	idadeMenor = i;
	}
}

printf("\nMaior idade: %s, com %d anos.", pessoas[idadeMaior].nome, pessoas[idadeMaior].idade);
printf("\nMenor idade: %s, com %d anos.\n\n", pessoas[idadeMenor].nome, pessoas[idadeMenor].idade);

}