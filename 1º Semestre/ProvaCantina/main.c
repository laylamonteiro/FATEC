#include <stdio.h>

int main(void) {
int alunos, qtdsalg, i, menos10=0, qtd=0, maior, total;

printf("qtd alunos: ");
scanf("%d", &alunos);

for (i=1; i<= alunos; i++){
  printf("Qtd salgados: ");
  scanf("%d", &qtdsalg);

  total += qtdsalg;

  if (qtdsalg <10)
  menos10++;
  if (qtdsalg > qtd)
  maior = qtdsalg;

  qtd = qtdsalg;
}

  printf("\n Alunos entrevistados: %d", alunos);
  printf("\n Menos de 10 salgados: %d", menos10);
  printf("\n Média: %d", total/alunos);
  printf("\n Maior qtd: %d", maior);

  return 0;
}
