#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prato;

    printf("Ola! Bem vindo ao NYC Restaurant\n\n");
    printf("0 - Garden Special\n");
    printf("1 - Manhattan Meat Lovers\n");
    printf("2 - Roasted Garlic and Shrimp\n");
    printf("3 - Barbecue Chicken\n");
    printf("4 - New York's Finest\n");
    printf("5 - SAIR\n");

    printf("\nDigite o numero do seu pedido: ");
    scanf("%d", &prato);

    switch(prato) {

        case 0:
            printf("\nPrato escolhido: Garden Special\n\n");
            break;

        case 1:
            printf("\nPrato escolhido: Manhattan Meat Lovers\n\n");
            break;

        case 2:
            printf("\nPrato escolhido: Roasted Garlic and Shrimp\n\n");
            break;

        case 3:
            printf("\nPrato escolhido: Barbecue Chicken\n\n");
            break;

        case 4:
            printf("\nPrato escolhido: New York's Finest\n\n");
            break;

        default:
            system("cls");
            return main();
            break;

    }

    printf("Perfeito! Seu pedido ficara pronto em ate 40 min!\n\n");

    printf("-------------------------------------------------------\n");
    printf("-------------------PROXIMO PEDIDO----------------------\n");
    printf("-------------------------------------------------------\n\n");

    return main();
}
