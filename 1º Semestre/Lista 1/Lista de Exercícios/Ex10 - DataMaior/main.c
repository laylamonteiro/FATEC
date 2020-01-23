#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, d2, m1, m2, y1, y2;

    printf("Digite uma data (dd/mm/yyyy)\n");
    printf("Dia: ");
    scanf("%d", &d1);
    printf("Mes: ");
    scanf("%d", &m1);
    printf("Ano: ");
    scanf("%d", &y1);

    printf("\nDigite outra data (dd/mm/yyyy)\n");
    printf("Dia: ");
    scanf("%d", &d2);
    printf("Mes: ");
    scanf("%d", &m2);
    printf("Ano: ");
    scanf("%d", &y2);

    if ((y1 > y2) || ((y1 >= y2) && (m1 > m2)) || ((y1 >= y2) && (m1 >= m2) && (d1 > d2)))
        printf("\nA maior data e: %d/%d/%d\n", d1, m1, y1);

        else if (d1 == d2 && m1 == m2 && y1 == y2)
            printf("As datas sao iguais");

            else printf("\nA maior data e: %d/%d/%d\n", d2, m2, y2);

    return 0;
}
