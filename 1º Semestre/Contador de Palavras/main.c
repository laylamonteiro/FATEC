#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[100];
    int i = 0, palavras = 0;

    printf("Digite uma frase (max 100 caracteres): ");
    fgets(texto, 100, stdin);

    while (texto[i] != '\0' && texto[i] != '\n'){

    while (texto[i] == ' ')
        i++;

    if (texto[i] != '\0' && texto[i] != '\n'){
        palavras++;
        while (texto[i] != ' ' && texto[i] != '\n' && texto[i] != '\0')
            i++;
    }
    }

    printf("Total de palavras: %d", palavras);

    return 0;
}
