#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265359

int main()
{//Variáveis
    //Quadrado
    int lado = 3;

    //Retângulo
    int base = 8, altura = 4;

    //Círculo
    int raio = 5;

 //Resultado a ser mostrado na tela
    //Quadrado
    printf("Area quadrado = %d\n", ((lado) * (lado)));

    //Retângulo
    printf("Area retangulo = %d\n", ((base)*(altura)));

    //Círculo
    printf("Area circulo = %f\n", (PI * pow (raio,2)));

    return 0;
}
