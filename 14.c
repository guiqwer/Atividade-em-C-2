#include <stdio.h>

int main()
{
  int num1, num2;
  char operacao;

  printf("Digite o primeiro número inteiro: ");
  scanf("%d", &num1);

  printf("Digite o segundo número inteiro: ");
  scanf("%d", &num2);

  printf("Escolha a operação (+, -, *, /): ");
  scanf(" %c", &operacao);

  int resultado;
  if (operacao == '+')
  {
    resultado = num1 + num2;
  }
  else if (operacao == '-')
  {
    resultado = num1 - num2;
  }
  else if (operacao == '*')
  {
    resultado = num1 * num2;
  }
  else if (operacao == '/' && num2 != 0)
  {
    resultado = num1 / num2;
  }
  else
  {
    printf("Operação inválida ou divisão por zero.\n");
  }

  printf("Resultado: %d\n", resultado);

  return 0;
}
