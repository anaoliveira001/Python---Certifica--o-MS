#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int ano;
    ano=2022;

    char letra;
    letra='C';

    printf("Hello world!\n");
    printf("%i\n",ano);
    printf("Qual a avali��o relativamente a 2021? (A a F)");
    printf("\nresposta: %c\n", letra);
}

char nome[30] ="Sevilha";
printf("Destino para %i ser� 2022 %s",ano,nome);

int number;
printf("Indique o n�mero de viagens para 2022");
scanf("%", &number);
printf("viagens pretendidas: %i", number);
float carteira = 100.49;
printf("")
