#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct
{
    int horas;
    int minutos;
    int segundos;

} Tempo;

int main()
{

    int seg;
    Tempo tempo;

    printf("Quantos segundos serao: ");
    scanf("%d", &seg);
    printf("\n");

    tempo.horas = seg / 3600;
    int resto = seg % 3600;
    tempo.minutos = resto / 60;
    tempo.segundos = resto % 60;


    printf("O valor digitado equivale %dh:%dmin:%dseg\n", tempo.horas,tempo.minutos,tempo.segundos );





    return 0;
}
