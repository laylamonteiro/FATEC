#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;

    printf("Digite um numero: ");
    scanf("%d", &A);

//Par ou impar
    if (A % 2 != 0)
        printf("\nNumero impar ");
    else
        printf("\nNumero par ");

//Menor ou maior ou igual a 100
    if (A >= 100)
        printf("e maior ou igual a 100\n");
    else
        printf("e menor do que 100\n");

    return 0;
}
