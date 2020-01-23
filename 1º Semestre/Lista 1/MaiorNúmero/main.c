#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, numero, maior = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

    printf("Digite um numero: ");
    scanf("%d", &numero);

        if (numero > maior)
            maior = numero;
    }

    printf("\nO maior numero digitado e: %d", maior);

    return 0;
}
