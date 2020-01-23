#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, maior, med, menor;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &A);

    printf("\nDigite outro numero inteiro: ");
    scanf("%d", &B);

    printf("\nDigite mais um numero inteiro: ");
    scanf("%d", &C);

    if (A >= B && A >= C)
    {
        maior = A;
        if (B >= C )
            med = B, menor = C;
        else
            med = C, menor = B;
    }


    else if (B >= A && B >= C)
    {
        maior = B;
        if (A >= C )
            med = A, menor = C;
        else
            med = C, menor = A;
    }


    else
    {
        maior = C;
        if (B >= A )
            med = B, menor = A;
        else
            med = A, menor = B;
    }


    printf("\n*********************************\nNumeros em ordem crescente: %d \t %d \t %d\n", menor, med, maior);


    return 0;
}
