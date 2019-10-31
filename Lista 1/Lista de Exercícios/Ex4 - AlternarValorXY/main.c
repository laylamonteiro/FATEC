#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;

    printf("Valor de X: ");
    scanf("%d", &X);
    printf("Valor de Y: ");
    scanf("%d", &Y);

    X = X + Y;

    Y = X - Y;

    X = X - Y;

    printf("\n\nValor de X: %d", X);
    printf("\nValor de Y: %d", Y);

    return 0;
}
