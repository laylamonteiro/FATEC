#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a = 0, b, ordem;

    printf("Digite 5 numeros: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b);

        if(b > a){
            ordem = 0;
        }else{
            ordem = 1;
        }

        a = b;
    }

    if (ordem == 0){
        printf("Ordenados");
    }else{
        printf("Nao-ordenados");
    }

    return 0;
}
