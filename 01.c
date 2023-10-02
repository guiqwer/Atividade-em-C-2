#include <stdio.h>

int main()
{
  int anoNascimento, numSorte, idade, valorTotal;

  printf("Digite o valor da compra:");
  scanf("%d", &valorTotal);

  printf("Digite seu ano de nascimento:");
  scanf("%d", &anoNascimento);

  idade = 2023 - anoNascimento;

  if (valorTotal < 500)
  {
    numSorte = abs(5000 - valorTotal * idade);
  }
  else if (valorTotal > 500)
  {
    numSorte = abs(50000 - valorTotal * idade);
  }
  else
  {
    numSorte = abs(idade * idade);
  }

  printf("Numero da sorte: %d", numSorte);
  return 0;
}