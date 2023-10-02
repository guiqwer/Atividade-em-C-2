#include <stdio.h>

int main()
{
  float salario, financiamento, salarioConjuge;

  printf("Informe seu sálario: \n");
  scanf("%f", &salario);

  printf("Informe o valor financiamento desejado:\n");
  scanf("%f", &financiamento);

  if (financiamento <= 5 * salario)
  {
    printf("Financiamento concedido.\n");
  }
  else
  {
    printf("Digite o salário do seu cônjugue");
    scanf("%f", &salarioConjuge);
    if (financiamento <= 5 * (salarioConjuge + salario))
    {
      printf("Financiamento concedido.\n");
    }
    else
    {
      printf("Financiamento negado.\n");
    }
  }
  printf("Obrigado por nos consultar!");
  return 0;
}