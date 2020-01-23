#include <stdio.h>

//O objetivo deste trabalho é simular uma luta entre Ryu e Ken e determinar quem ganhou a luta.
//Este trabalho pertence à:
//Layla Monteiro Ferreira || RA: 27604/81921013
//Mariana Christensen || RA: 2760481921016
//Data: 17/09/2019

int main()
{

    //X – Soco fraco / Y – Soco médio / Z – Soco forte / A – Chute fraco / B – Chute médio / C – Chute forte
    //r e k são contadores

    //Declaração de variáveis

    char GOLPE;
    int X = 1, Y = 2, Z = 3, A = 2, B = 4, C = 6, VIDA_RYU = 15, VIDA_KEN = 15, r, k;

    //Início do jogo

    printf("Digite X, Y ou Z para SOCO e A, B ou C para CHUTE");

    //Cada jogador tem direito a 3 golpes, e para isso, utilizamos um laço 'for' com um contador para repetir os processos 3 vezes.

    do
    {
        printf("\nRYU, voce tem 3 golpes: \n");

        for (r = 0; r < 3; r++)
        {
            scanf("%c", &GOLPE);

            //Independentemente se o usuário digitar a letra em maiúsculo ou minúsculo, ambos os formatos serão reconhecidos.
            if (GOLPE == 'A' || GOLPE == 'a')
                VIDA_KEN = VIDA_KEN - A;
            else if (GOLPE == 'B' || GOLPE == 'b')
                VIDA_KEN = VIDA_KEN - B;
            else if (GOLPE == 'C' || GOLPE == 'c')
                VIDA_KEN = VIDA_KEN - C;
            else if (GOLPE == 'X' || GOLPE == 'x')
                VIDA_KEN = VIDA_KEN - X;
            else if (GOLPE == 'Y' || GOLPE == 'y')
                VIDA_KEN = VIDA_KEN - Y;
            else if (GOLPE == 'Z' || GOLPE == 'z')
                VIDA_KEN = VIDA_KEN - Z;

            //Se o usuário digitar qualquer outro caractere que não os referentes à golpes, o programa dirá que o jogador errou o golpe
            else
            {
                printf("ERROU O GOLPE\n");
                VIDA_KEN = VIDA_KEN - 0;
            }

            //Essa função pega do buffer de entrada (stdin) o caractere digitado e o processa, assim, retirando-o da fila, e consequentemente, limpando o buffer.
            getchar();
        }

        printf("\nKEN, voce tem 3 golpes: \n");

        for (k = 0; k < 3; k++)
        {
            scanf("%c", &GOLPE);

            if (GOLPE == 'A' || GOLPE == 'a')
                VIDA_RYU = VIDA_RYU - A;
            else if (GOLPE == 'B' || GOLPE == 'b')
                VIDA_RYU = VIDA_RYU - B;
            else if (GOLPE == 'C' || GOLPE == 'c')
                VIDA_RYU = VIDA_RYU - C;
            else if (GOLPE == 'X' || GOLPE == 'x')
                VIDA_RYU = VIDA_RYU - X;
            else if (GOLPE == 'Y' || GOLPE == 'y')
                VIDA_RYU = VIDA_RYU - Y;
            else if (GOLPE == 'Z' || GOLPE == 'z')
                VIDA_RYU = VIDA_RYU - Z;
            else
            {
                printf("ERROU O GOLPE\n");
                VIDA_RYU = VIDA_RYU - 0;
            }

            getchar();
        }

    }

    //O loop se repete enquanto a vida de um dos jogadores for maior ou igual a zero

    while (VIDA_RYU >= 0 && VIDA_KEN >= 0);

    //O jogo mostra a quantidade de vidas de cada jogador
    printf("\n**********************\n");
    printf("VIDA DE KEN: %d/100\n", VIDA_KEN);
    printf("VIDA DE RYU: %d/100", VIDA_RYU);
    printf("\n**********************\n");


    //Dependendo do resultado, imprime quem ganhou ou se foi um empate
    if (VIDA_RYU > VIDA_KEN)
        printf("\n\n***RYU VENCEU***\n\n");
    if (VIDA_KEN > VIDA_RYU)
        printf("\n\n***KEN VENCEU***\n\n");
    if (VIDA_KEN == VIDA_RYU)
        printf("\n\n***EMPATE***\n\n");

    return 0;
}
