#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++){
            if (n % i == 0)
                printf("\nDivisor de N: %d\n", i);
    }
    return 0;
}
