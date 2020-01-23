#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NV1, SG1, GM1, NCV1, NCA1, NV2, SG2, GM2, NCV2, NCA2;
    int vencedor;


    printf("\nNumero de vitorias");
    printf("\nTime 1: ");
    scanf("%d", &NV1);
    printf("Time 2: ");
    scanf("%d", &NV2);
    if (NV1 > NV2)
    {
        vencedor = 1;
        printf("\nTime ganhador por desempate: Time %d\n", vencedor);
    }
    else if (NV2 > NV1)
    {
        vencedor = 2;
        printf("\nTime ganhador por desempate: Time %d\n", vencedor);
    }

    else
    {

        printf("\nSaldo de gols");
        printf("\nTime 1: ");
        scanf("%d", &SG1);
        printf("Time 2: ");
        scanf("%d", &SG2);
        if (SG1 > SG2)
        {
            vencedor = 1;
            printf("\nTime ganhador por desempate: Time %d\n", vencedor);
        }
        else if (SG2 > SG1)
        {
            vencedor = 1;
            printf("\nTime ganhador por desempate: Time %d\n", vencedor);
        }
        else
        {

            printf("\nGols marcados: ");
            printf("\nTime 1: ");
            scanf("%d", &GM1);
            printf("Time 2: ");
            scanf("%d", &GM2);
            if (GM1 > GM2)
            {
                vencedor = 1;
                printf("\nTime ganhador por desempate: Time %d\n", vencedor);
            }
            else if (GM2 > GM1)
            {
                vencedor = 2;
                printf("\nTime ganhador por desempate: Time %d\n", vencedor);
            }
            else
            {

                printf("\nNumero de cartoes vermelhos: ");
                printf("\nTime 1: ");
                scanf("%d", &NCV1);
                printf("Time 2: ");
                scanf("%d", &NCV2);
                if (NCV1 < NCV2)
                {
                    vencedor = 1;
                    printf("\nTime ganhador por desempate: Time %d\n", vencedor);
                }
                else if (NCV2 < NCV1)
                {
                    vencedor = 2;
                    printf("\nTime ganhador por desempate: Time %d\n", vencedor);
                }
                else
                {

                    printf("\nNumero de cartoes amarelos: ");
                    printf("\nTime 1: ");
                    scanf("%d", &NCA1);
                    printf("Time 2: ");
                    scanf("%d", &NCA2);
                    if (NCA1 < NCA2)
                    {
                        vencedor = 1;
                        printf("\nTime ganhador por desempate: Time %d\n", vencedor);
                    }
                    else if (NCA2 > NCA1)
                    {
                        vencedor = 2;
                        printf("\nTime ganhador por desempate: Time %d\n", vencedor);
                    }

                    else if (NV1==NV2 && SG1==SG2 && GM1==GM2 && NCV1==NCV2 && NCA1==NCA2)
                        printf("\nTimes continuam empatados");


                    return 0;
                }
            }
        }
    }
}
