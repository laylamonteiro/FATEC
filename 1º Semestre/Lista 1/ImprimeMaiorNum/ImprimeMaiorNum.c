#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C, maior;

    printf("\nDigite um numero inteiro: ");
    scanf("%f", &A);

    printf("\nDigite outro numero inteiro: ");
    scanf("%f", &B);

    printf("\nDigite mais um numero inteiro: ");
    scanf("%f", &C);

    if (A >= B && A >= C)
        maior = A;
    else if
    (B >= A && B >= C)
        maior = B;
    else if
    (C >= A && C >= B)
        maior = C;

    printf("\n*********************************\nO maior numero digitado foi: %0.1f\n", maior);


    return 0;
}
