#include <stdio.h>
#include <stdlib.h>

int main()
{

char T;
float temp;

printf("Digite C para Celcius ou F para Fahrenheit para conversao: ");
scanf("%c", &T);

printf("Digite a temperatura: ");
scanf("%f", &temp);

if (T == 'C') {
    printf("\nTemperatura em Celcius: %.1f graus", temp);
    printf("\nTemperatura em Fahrenheit: %.2f graus\n", (temp * 9/5) + 32);
}
if (T == 'F'){
    printf("\nTemperatura em Fahrenheit: %.2f graus", temp);
    printf("\nTemperatura em Celcius: %.1f graus\n", (temp - 32) * 5/9);
}

return 0;
}
