#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, s, area;

    printf("Digite o tamanho dos lados do triangulo\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a==b && b==c && c==a)
        printf("\nO triangulo e equilatero");
    else if (a==b || b==c || c==a)
        printf("\nO triangulo e isosceles");
    else if (a!=b && b!=c && c!=a)
        printf("\nO triangulo e escaleno");

    s = (a  + b + c) / 2;
    area = (sqrt(s*(s-a)*(s-b)*(s-c)));

    printf("\nA area do triangulo e: %lf\n", area);

    return 0;
}
