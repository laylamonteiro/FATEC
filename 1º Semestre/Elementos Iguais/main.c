#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[5], vetor2[5], i, j, iguais = 0;

    printf("Digite 5 valores para o Vetor 1:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &vetor1[i]);

    printf("Digite 5 valores para o Vetor 2:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &vetor2[i]);

    printf("\n\nVetor 1: %d %d %d %d %d \n", vetor1[0], vetor1[1], vetor1[2], vetor1[3], vetor1[4]);
    printf("Vetor 2: %d %d %d %d %d \n\n", vetor2[0], vetor2[1], vetor2[2], vetor2[3], vetor2[4]);

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (vetor1[i] == vetor2[j]){
                iguais = 1;
                printf("Vetor 1[%d] e Vetor 2[%d] sao iguais\n", i, j);
            }

    if (!iguais)
        printf("Sem elementos em comum\n");

}
