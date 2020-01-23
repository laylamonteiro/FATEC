#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, x;
    int binario[8];

    printf("Dado o conjunto A, tal que x pertence a A e 0<=x<255, digite um numero que pertenca ao intervalo expresso.");
    scanf("%d", &x);
    for (i=0; i<8; i++)
    {
        binario[i]=x%2;
        x=(x/2);
    }

    for(i=7; i>=0; i--)
    {
        printf("%d", binario[i]);
    }
}
