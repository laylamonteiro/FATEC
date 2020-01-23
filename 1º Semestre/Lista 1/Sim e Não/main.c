#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;

    printf("Digite um numero: ");
    scanf("%d", &A);

    if ((A % 2 == 0 && A > 10) || (A % 2 != 0 && A < 50))
        printf("\nSIM\n");
    else
        printf("\nNAO\n");

    return 0;
}
