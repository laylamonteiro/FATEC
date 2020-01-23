#include <stdio.h>
#include <stdlib.h>
#define MAX 500

int main()
{
    char text[MAX], encript[MAX], decript[MAX];
    char alphabet[26] = {'a', 'b', 'c', 'd','e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int shift = 0, alpha, i, j;

    printf("--- Cifra de Cesar ---\n\n");
    printf("-ENCRIPTAÇÃO-\n");
    printf("Frase: ");
    fgets(text, MAX, stdin);
    printf("Shift: ");
    while (shift <= 0)
        scanf("%d", &shift);

    while (text[i] != ' '){
        for (j= 0 ; j <= 26 ; j++){
            if
            decript[i] = alphabet[i + shift];

        }
    }

    printf("Frase encriptada: %s\n", encript);

    return 0;
}
