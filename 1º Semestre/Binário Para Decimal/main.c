#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //Declaração de variáveis
    //i= contador; bin= numero binário; dec= numero decimal; numc = numero de caracteres; bin_char = binario em char

    int i, numc, dec;
    char bin[50];

    //int binario [numc];

    printf("Digite um numero binario a ser convertido para decimal: ");
    scanf("%c", &bin);

    numc = strlen(bin);

    printf("%d", numc);

    /*for (i = 0; i <= numc; i++){
        (2 * pow (bin [0], i);
    return 0;*/

   return(0);
}
