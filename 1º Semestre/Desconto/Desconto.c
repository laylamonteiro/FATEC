#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    int b;
    int c;
    float d;

    printf("Valor unitario: R$ ");
    scanf("%f", &a);

    printf("Quantidade: ");
    scanf("%d", &b);

    printf("Desconto: ");
    scanf("%d", &c);

    d = (100-c)/100.0;

    printf("Valor a ser pago: R$ %.2f", (a*b*d));

    return 0;
}
