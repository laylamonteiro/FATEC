#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[5], vetor2[5], i, resultado = 0;

    printf("Digite 5 valores:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &vetor1[i]);

    printf("Digite mais 5 valores:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &vetor2[i]);

    printf("\n\nVetor 1: %d %d %d %d %d \n", vetor1[0], vetor1[1], vetor1[2], vetor1[3], vetor1[4]);
    printf("Vetor 2: %d %d %d %d %d \n\n", vetor2[0], vetor2[1], vetor2[2], vetor2[3], vetor2[4]);

    for (i = 0; i < 5; i++){
        printf("%d x %d = %d\n", vetor1[i], vetor2[i], vetor1[i]*vetor2[i]);
        resultado = resultado + (vetor1[i]*vetor2[i]);
    }

    printf("\nResultado do produto interno dos 2 vetores: %d \n", resultado);

    return 0;
}
