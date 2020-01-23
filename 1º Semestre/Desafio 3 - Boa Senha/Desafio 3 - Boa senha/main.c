#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char senha[50];
    int len;

    printf("Digite sua senha: ");
    scanf("%c", senha);
    len = strlen(senha);

    if(len < 8)
    {
        printf("A senha deve conter pelo menos 8 caracteres\n");
    } else{
        printf("A senha tem: %d caracteres", len);
    }
    if(!senha )
    {
        printf("A senha deve conter pelo menos uma letra maiuscula\n");
    }
    if(!senha )
    {
        printf("A senha deve conter pelo menos uma letra minuscula\n");
    }
    if(!senha )
    {
        printf("A senha deve conter pelo menos um numero\n");
    }
    if(!senha )
    {
        printf("A senha deve conter pelo menos um simbolo\n");
    }
    if(!senha )
    {
        printf("A senha e um palindromo\n");
    }
    if(!senha )
    {
        printf("A senha nao pode conter palavras reservadas\n");
    }

    return 0;
}
