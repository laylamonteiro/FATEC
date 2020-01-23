#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, n, anterior = 0, atual = 1, aux;
    printf("Deseja descobrir quantos numeros da serie de Fibonacci? ");
    scanf("%d", &n);
    printf("%d - ", atual);

    for (i = 0; i < n; i++){
        aux = anterior + atual;
        anterior = atual;
        atual = aux;

        printf("%d - ", aux);
    }

    return 0;
}
