#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VT = Valor da Transação, C = Comissão

    float VT, C;

    printf("Digite o valor da transacao em R$: ");
    scanf("%f", &VT);


    if (VT < 530)
        C = 39;

    else if (VT <= 2500)
        C = 30 + (0.017 * VT);

    else if (VT > 2500 && VT <= 6250)
        C = 56 + (0.0066 * VT);

    else if (VT > 6250 && VT <= 20000)
        C = 76 + (0.0034 * VT);

    else if (VT > 20000 && VT <= 50000)
        C = 100 + (0.0022 * VT);

    else if (VT > 50000 && VT <= 500000)
        C = 155 + (0.0011 * VT);

    else
        C = 255 + (0.0009 * VT);


    printf("Comissao: R$ %.2f\n", C);


    return 0;
}
