#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;

    printf("Digite um numero: ");
    scanf("%d", &A);
    if (A % 2 != 0)
    {
        printf("O numero e impar\n");
    }
    else
        printf("O numero e par");

    return 0;
}
