#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;

    printf("Digite um numero: ");
    scanf("%lf", &a);

    printf("Digite outro numero: ");
    scanf("%lf", &b);

    printf("\nSoma: %lf",(a + b));
    printf("\nSubtracao: %lf", (a - b));
    printf("\nMultiplicacao: %lf", (a * b));
    printf("\nDivisao: %lf", (a / b));

    return 0;
}
