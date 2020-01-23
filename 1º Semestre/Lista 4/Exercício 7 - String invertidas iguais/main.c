#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j;
    char str[80], inversa[80];
    int len;

    printf("Digite uma string de ate 79 caracteres: ");
    gets(str);

    len = (strlen(str));

    printf("\nNumero de caracteres string 1: %d \n", len);

    inversa[len] = '\0';

    for (i = 0, j = len - 1; i < 80 ; i++, j--){
            if(str[j] == ' '){
                inversa[i] = str[j--];
            }
        inversa[i] = str[j];
        len--;
    }

    printf("\nNumero de caracteres string inversa: %d \n", strlen(inversa));

    printf("\nFrase invertida: %s\n", inversa);

    return 0;
}
