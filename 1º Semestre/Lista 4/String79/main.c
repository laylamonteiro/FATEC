#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[80], inversa[80];
    int i, j, tam = 0;

    printf("Digite uma frase (max 79 caracteres): ");
    fgets(str, 80, stdin);

    for (tam = 0 ; (str[tam] != '\0') && (str[tam] != '\n') ; tam++)
        ;

    inversa[tam] = '\0';

    for (i = 0, j = tam-1; i < 80 ; i++, j--)
        inversa[i] = str[j];

    printf("Frase invertida: %s\n", inversa);

    return 0;
}
