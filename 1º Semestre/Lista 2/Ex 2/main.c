#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double i, a, b;

    printf("Potencias!\n\n");

    for (i = 0; i < 100; i++){
    printf("Digite a base: ");
        scanf("%lf", &a);
    printf("Digite a potencia: ");
        scanf("%lf", &b);

    printf("Resultado: %.0lf \n\n", pow(a, b));
    printf("-----------------------------\n\n");

    }
    return 0;
}
