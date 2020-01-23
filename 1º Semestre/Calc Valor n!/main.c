#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, acumuladora;

    printf("Digite o valor de N!: ");
    scanf("%d", &n);

    acumuladora = 1;

    printf("%d\n", acumuladora);

    for (i = 1; i <= n; i++)
    {
        acumuladora = acumuladora * i;
    }
        printf("%d\n", acumuladora);

    return 0;
}
