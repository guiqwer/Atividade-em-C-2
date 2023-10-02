#include <stdio.h>

int main()
{
  float salario, desconto;

  printf("Digite o salário da pessoa: ");
  scanf("%f", &salario);

  if (salario <= 600)
  {
    desconto = 0;
  }
  else if (salario <= 1200)
  {
    desconto = salario * 0.20;
  }
  else if (salario < 2000)
  {
    desconto = salario * 0.25;
  }
  else
  {
    desconto = salario * 0.30;
  }

  printf("O desconto do INSS é: R$ %.2f\n", desconto);

  return 0;
}
