#include <stdio.h>

int main()
{
  char tipoApartamento;
  int numDiarias;
  float valorConsumo, valorDiaria, valorTotalDiarias, subtotal, taxaServico, totalGeral;


  printf("Digite o tipo do apartamento (A, B, C ou D): ");
  scanf(" %c", &tipoApartamento);

  printf("Digite o número de diárias utilizadas pelo hóspede: ");
  scanf("%d", &numDiarias);

  printf("Digite o valor do consumo interno do hóspede: ");
  scanf("%f", &valorConsumo);

  if (tipoApartamento == 'A')
  {
    valorDiaria = 150.0;
  }
  else if (tipoApartamento == 'B')
  {
    valorDiaria = 100.0;
  }
  else if (tipoApartamento == 'C')
  {
    valorDiaria = 75.0;
  }
  else if (tipoApartamento == 'D')
  {
    valorDiaria = 175.0;
  }
  else
  {
    printf("Tipo de apartamento inválido.\n");
  }

  valorTotalDiarias = valorDiaria * numDiarias;

  subtotal = valorTotalDiarias + valorConsumo;

  taxaServico = 0.10 * subtotal;

  totalGeral = subtotal + taxaServico;

  printf("Total a pagar: R$ %.2f\n", totalGeral);

  return 0;
}
