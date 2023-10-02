#include <stdio.h>

int main()
{
  int numeroMes;

  printf("Digite um número inteiro entre 1 e 12: ");
  scanf("%d", &numeroMes);

  if (numeroMes == 1)
  {
    printf("Janeiro\n");
  }
  else if (numeroMes == 2)
  {
    printf("Fevereiro\n");
  }
  else if (numeroMes == 3)
  {
    printf("Março\n");
  }
  else if (numeroMes == 4)
  {
    printf("Abril\n");
  }
  else if (numeroMes == 5)
  {
    printf("Maio\n");
  }
  else if (numeroMes == 6)
  {
    printf("Junho\n");
  }
  else if (numeroMes == 7)
  {
    printf("Julho\n");
  }
  else if (numeroMes == 8)
  {
    printf("Agosto\n");
  }
  else if (numeroMes == 9)
  {
    printf("Setembro\n");
  }
  else if (numeroMes == 10)
  {
    printf("Outubro\n");
  }
  else if (numeroMes == 11)
  {
    printf("Novembro\n");
  }
  else if (numeroMes == 12)
  {
    printf("Dezembro\n");
  }
  else
  {
    printf("Não existe mês com esse número.\n");
  }

  return 0;
}
