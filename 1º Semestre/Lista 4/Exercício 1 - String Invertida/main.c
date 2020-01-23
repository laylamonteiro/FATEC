#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j;
    char str[80], str2[80];
    int len;

    printf("Digite uma string de ate 79 caracteres: ");
    gets(str);

    len = (strlen(str));

    printf("\nNumero de caracteres: %d \n", strlen(str));

    for (i = 0, j = len-1; i < len; i++, j--)
    {
        str2[i] = str[j];
    }

    printf("\nString invertida: %s", str2);

    return 0;
}
