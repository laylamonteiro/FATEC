#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[80];
    int len, i, j;

    printf("Digite uma string (até 79 caracteres): ");
    gets(str);

    len = strlen(str);
    str[len] = '\0';

    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            for(j = i ; j < len ; j++)
                str[j] = str[j + 1];
                //len--;
        }
    }

    printf("\n\nStringSemEspaco = %s\n", str);

    return 0;
}
