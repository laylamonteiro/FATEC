#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int pot, i, base;
    long int acumuladora = 1;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Ate qual potencia: ");
    scanf("%d", &pot);

    for (i = 0; i <= pot; i++)
    {
        printf("%d elevado a %d = ", base, i);

        printf("%ld\n", acumuladora);
        acumuladora = acumuladora * base;
    }

    return 0;
}
