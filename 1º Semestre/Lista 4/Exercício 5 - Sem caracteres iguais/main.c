#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

int main()
{
    char str1[MAX], str2[MAX];
    int i, j, len1, len2;

    printf("Digite uma string (max 79 caracteres): ");
    gets(str1);
    len1 = strlen(str1);
    str1[len1] = '\0';

    printf("Digite outra string (max 79 caracteres): ");
    gets(str2);
    len2 = strlen(str2);
    str2[len2] = '\0';

    for (i = 0; i < len1; i++){
        for(j = 0; j < len2; j++){
            if(str1[i] == str2[j]){
                str2[j] = ' ';
            }
        }
    }

    printf("RESULTADO: %s", str2);

    return 0;
}
