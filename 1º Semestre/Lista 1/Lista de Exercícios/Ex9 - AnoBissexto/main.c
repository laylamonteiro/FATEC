#include <stdio.h>
#include <stdlib.h>

int main()
{
int ano;

printf("Digite um ano (YYYY) para descobrir se ele é um Ano Bissexto: ");
scanf("%d", &ano);

if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0) ))
    printf("\nO ano digitado e bissexto\n");
    else printf("\nO ano digitado nao e bissexto\n");

    return 0;
}
