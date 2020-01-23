#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, aux, acumuladora=0;

    printf("Digite o quantas entradas voce deseja fazer: ");
    scanf("%d", &n);

    for (i = 1; i<=n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &aux);

        acumuladora = acumuladora + aux;
    }
        printf("Soma total: %d\n", acumuladora);

        return 0;
}
