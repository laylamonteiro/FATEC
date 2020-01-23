#include <stdio.h>
#include <stdlib.h>
#define  pi 3.14

int main()
{
    char F;
    float L1, L2, R;

    printf("Digite uma opcao: Q (Quadrado), R (Retangulo) ou C (circulo): \n");
    scanf(" %c", &F);

    if (F == 'Q' || F == 'q'){
        printf("\nDigite o tamanho do lado do quadrado: ");
        scanf("%f", &L1);
        L1 = L1*L1;
        printf("\nArea do quadrado = %.1f\n", L1);
    }

    else if (F == 'R' || F == 'r'){
        printf("\nDigite o tamanho do lado do retangulo: ");
        scanf("%f", &L1);
        printf("Digite o tamanho do outro lado do retangulo: ");
        scanf("%f", &L2);
        L1 = L1*L2;
        printf("\nArea do retangulo = %.1f\n", L1);
    }

    else if (F == 'C' || F == 'c'){
        printf("\nDigite o tamanho do raio do circulo: ");
        scanf("%f", &R);
        R = pi*R*R;
        printf("\nArea do circulo = %.1f\n", R);

    }

    else printf("\nOpcao invalida!\n");

    return 0;
}
