#include <stdio.h>

int main()
{
  float valorCompra, valorParcela, valorTotal;
  int numParcelas;

  printf("Digite o valor da compra à vista: R$ ");
  scanf("%f", &valorCompra);

  printf("Digite o número de parcelas desejado (1, 2 ou 3): ");
  scanf("%d", &numParcelas);

  if (numParcelas == 1)
  {
    valorParcela = valorCompra;
    valorTotal = valorCompra;
  }
  else if (numParcelas == 2)
  {
    valorParcela = (valorCompra * 1.10) / 2;
    valorTotal = valorCompra * 1.10;
  }
  else if (numParcelas == 3 || numParcelas > 3)
  {
    valorParcela = (valorCompra * 1.20) / 3;
    valorTotal = valorCompra * 1.20;
  }
  else
  {
    printf("Número de parcelas inválido. Considerando pagamento à vista.\n");
    valorParcela = valorCompra;
    valorTotal = valorCompra;
  }

  printf("Número de parcelas: %d\n", numParcelas);
  printf("Valor de cada parcela: R$ %.2f\n", valorParcela);
  printf("Valor total a ser pago: R$ %.2f\n", valorTotal);

  return 0;
}
