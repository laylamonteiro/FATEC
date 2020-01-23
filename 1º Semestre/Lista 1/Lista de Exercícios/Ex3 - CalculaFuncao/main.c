#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, result;

    printf("Digite o valor de f(x): ");
    scanf("%lf", &x);

    result = (sqrt(x)+(x/2)+pow(x,2));

    printf("%lf", result);

    return 0;
}
