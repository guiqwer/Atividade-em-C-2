#include <stdio.h>

int main()
{
  float salarioAtual, novoSalario;
  char funcao;

  printf("Digite o salário atual do funcionário: R$ ");
  scanf("%f", &salarioAtual);

  printf("Digite a função do funcionário (T para Técnico, G para Gerente, D para Demais): ");
  scanf(" %c", &funcao);

  if (funcao == 'T' || funcao == 't')
  {
    novoSalario = salarioAtual + (salarioAtual * 0.50);
  }
  else if (funcao == 'G' || funcao == 'g')
  {

    novoSalario = salarioAtual + (salarioAtual * 0.30);
  }
  else if (funcao == 'D' || funcao == 'd')
  {

    novoSalario = salarioAtual + (salarioAtual * 0.20);
  }
  else
  {
    printf("Função inválida.\n");
  }

  printf("O novo salário do funcionário é: R$ %.2f\n", novoSalario);

  return 0;
}
