
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} data;


int main()
{

data data[2];

for (int i=0; i<2; i++){

	printf("Digite um dia: ");
        scanf("%d", &data[i].dia);
        printf("Digite um mes: ");
        scanf("%d", &data[i].mes);
        printf("Digite o ano: ");
        scanf("%d", &data[i].ano);
        printf("\nA data digitada foi: %d/%d/%d\n", data[i].dia, data[i].mes, data[i].ano);

}

int anoMaior = 0, anoMenor = 0;

for (int i=0; i<2; i++){

        if(data[i].ano > anoMaior || anoMaior == 0)
        {
            printf("\nMaior ano %d\n", data[i].ano);
            anoMaior = data[i].ano;
        }

        if(data[i].ano < anoMaior || anoMenor == 0)
        {
            anoMenor = data[i].ano;
        }


}

printf("\nA diferença em anos da data e: %d anos\n", anoMaior - anoMenor);


}