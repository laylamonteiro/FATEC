#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //Declaração de variáveis
    //i= contador; bin= numero binário; bin_int = bin convertido em double;
    //bint_vet = vetor variavel de bin; dec= numero decimal; sum_dec = soma dos resultados decimais; numc = numero de caracteres;

    char bin[50];
    double bin_int = atof(bin);
    int i, bin_vet, numc, dec, sum_dec = 0;

    printf("Digite o numero binario a ser convertido para decimal: ");
    scanf("%s", &bin);
    numc = strlen(bin);
    printf("\nNum caracteres: %d\n\n", numc);

    /*for(i = 0; i < 50; i++)
    {
        scanf("%d",bin[i]);
    }
    printf("%d", numc);*/


    for (i = 0; i < numc; i++)
    {
        //for (bin_vet = 0; bin_vet < numc; bin_vet++)
        //{
            dec = (pow (2, i)) * bin[bin_vet];
            printf("%d \n", dec);

            sum_dec = sum_dec + dec;
            printf("\n%d ", sum_dec);

            //dec = dec +
            //i = i + 1;
        //}
    }

    return(0);
}
