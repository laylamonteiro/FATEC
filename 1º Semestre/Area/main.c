#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265359

int main()
{//Vari�veis
    //Quadrado
    int lado = 3;

    //Ret�ngulo
    int base = 8, altura = 4;

    //C�rculo
    int raio = 5;

 //Resultado a ser mostrado na tela
    //Quadrado
    printf("Area quadrado = %d\n", ((lado) * (lado)));

    //Ret�ngulo
    printf("Area retangulo = %d\n", ((base)*(altura)));

    //C�rculo
    printf("Area circulo = %f\n", (PI * pow (raio,2)));

    return 0;
}
