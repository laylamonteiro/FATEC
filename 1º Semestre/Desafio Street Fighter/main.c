#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fim = 'C';
    int soma_golpe = 0, golpe, contador_ryu = 0, contador_ken = 0;

    printf("| STREET FIGHTER |\n");
    printf("| RYU vs KEN |\n");
    printf("\n***REGRAS***\n Valores positivos: Ataques de Ryu\n Valores negativos: Ataques de Ken\n Digite 'F' para finalizar o jogo\n ************\n\n");
    printf("Inicio da luta...\n");

    while (fim != 'F' || fim != 'f')
    {
        scanf("%d", &golpe);
        soma_golpe = soma_golpe + golpe;

        if (golpe > 0 && golpe+1 > 0)
            golpe = 0;

        if (soma_golpe> 0)
            contador_ryu++;
        else if (soma_golpe < 0)
            contador_ken--;
    }

    if (contador_ryu > (contador_ken * -1))
        printf("\n\n***RYU GANHOU***\n\n");
    else if (contador_ryu < (contador_ken * -1))
        printf("\n\n***RYU GANHOU***\n\n");
    else
        printf("\n\n***EMPATE***\n\n");


    return 0;
}
