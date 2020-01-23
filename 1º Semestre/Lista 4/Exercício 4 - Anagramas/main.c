#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavra1[30], palavra2[30];
    int i, j, len, anagrama = 0;

    printf("--- ANAGRAMAS ---");
    printf("\n\nDigite uma palavra: ");
    gets(palavra1);

    len = (strlen(palavra1));

    printf("\n\nDigite outra palavra: ");
    gets(palavra2);

    if(strlen(palavra1) != strlen(palavra2))
    {
        printf("\nNao sao anagramas");
    }
    else
    {
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < len; j++)
            {
                if(palavra1[i] == palavra2[j])
                {
                    anagrama++;
                    palavra1[i] = '0';
                }
            }
        }
        if (anagrama == len)
        {
            printf("\nSao anagramas\n");
        }
        else
        {
            printf("\nNao sao anagramas\n");
        }
    }
    return 0;
}
