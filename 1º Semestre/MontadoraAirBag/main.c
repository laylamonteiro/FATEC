#include <stdio.h>
#include <stdlib.h>

//Este trabalho pertence à aluna:
//Layla Monteiro Ferreira - RA: 276081921013
//Referente às matérias de Matemática Discreta e Algoritmos e Lógica de programação
//Entrega dia 24/11/2019

int main()
{
    int airBagModelo[2][3] = {{2, 2, 0}, {4, 4, 2}};
    int x;
    int modeloQuantidade[3][1] = {{300}, {500}, {x}};
    int produtoMatriz[2][1] = {{1600}, {3600}};
    x = ((produtoMatriz[1][0] - ((airBagModelo[1][0] * modeloQuantidade[0][0]) + (airBagModelo[1][1] * modeloQuantidade[1][0])))/2);
    // x = (3600 - ((4 * 300) + (4*500))) / 2  =>  200 veiculos

    printf("--- MONTADORA ---");
    printf("\n\nModelos de veiculos: A, B e C");
    printf("\nTipos de airbags: D e E");
    printf("\n\n    A   B   C");
    printf("\nD  [%d   %d   %d]", airBagModelo[0][0], airBagModelo[0][1], airBagModelo[0][2]);
    printf("\nE  [%d   %d   %d]\n", airBagModelo[1][0], airBagModelo[1][1], airBagModelo[1][2]);

    printf("\nQuantidade de veiculos produzidos\n");
    printf("\nA  [%d]", modeloQuantidade[0][0]);
    printf("\nB  [%d]", modeloQuantidade[1][0]);
    printf("\nC  [ %s ]", "x");

    printf("\n\n--- Descobrir o valor de 'X' ---");
    printf("\n\nx = (3600 - ((4 * 300) + (4 * 500))) / 2");
    printf("\nx = (3600 - 3200) / 2");
    printf("\nx = 400 / 2");
    printf("\nx = 200 veiculos");

    printf("\n\n--- Produto das matrizes ---");
    printf("\n\n[%d   %d   %d]     [%d]", airBagModelo[0][0], airBagModelo[0][1], airBagModelo[0][2], modeloQuantidade[0][0]);
    printf("\n[%d   %d   %d]  X  [%d]", airBagModelo[1][0], airBagModelo[1][1], airBagModelo[1][2], modeloQuantidade[1][0]);
    printf("\n                [%d]", x);

    printf("\n\n[(2 x 300) + (2 x 500) + (0 x 200)]   [%d]", produtoMatriz[0][0]);
    printf("\n[(4 x 300) + (4 x 500) + (2 x 200)] = [%d]", produtoMatriz[1][0]);

    printf("\n\n--- RESULTADO ---");
    printf("\n\nForam montados %d veiculos do modelo C", x);
    printf("\nForam montados %d veiculos no total", produtoMatriz[0][0] + produtoMatriz[1][0]);

    printf("\n\n--- --- --- --- ---\n");

    system("pause");

    return 0;
}
