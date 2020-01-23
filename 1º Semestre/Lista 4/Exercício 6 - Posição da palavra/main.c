#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

int main()
{
  char texto[MAX], palavra[MAX];

  printf("Digite um texto: ");
  gets(texto);

  printf("Digite uma palavra: ");
  gets(palavra);

  int tamT = strlen(texto) - 1;
  int tamP = strlen(palavra) - 1; //O -1 e pelo '\n'
  int i, j;

    for(i = 0; i <= tamT - tamP; i++){ //Para cada possvel posic~ao de inicio
        j=0;
    while(j<tamP && palavra[j] == texto[i+j]) //Testa se palavra ocorre
        j++;
    if(j == tamP) //Se verdadeiro a palavra ocorre na pos. i
        printf("A palavra aparece na posicao: %d\n", i);
  }
  }
