#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade, contrib;

    printf("Digite as informacoes abaixo para saber se voce pode se aposentar");
    printf("\nSexo: F (Feminino) ou M (Masculino): ");
    scanf("%c", &sexo);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Tempo de contribuicao: ");
    scanf("%d", &contrib);

    if ((sexo == 'M' && idade >= 65 && contrib >= 10) || (sexo == 'M' && idade >= 63 && contrib >= 15) || (sexo == 'F' && idade >= 63 && contrib >= 10) || (sexo == 'F' && idade >= 61 && contrib >= 15))
        printf("\n ***Aposentavel***\n");
        else
            printf("\n ***Nao Aposentavel***\n");


    return 0;
}
