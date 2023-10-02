#include <stdio.h>

int main()
{
  float condominio = 350;
  float papagaio = 12;
  float gato = 30;
  float cachorro = 50;
  float outro = 20;
  int escolha;
  float total;

  printf("Selecione um animal de estimação\n 1 - Cachorro\n 2 - Papagaio\n 3- Gato\n 4- Outro\n ");
  scanf("%d", &escolha);

  if (escolha == 1)
  {
    total = condominio + cachorro;
  }
  else if (escolha == 2)
  {
    total = condominio + papagaio;
  }
  else if (escolha == 3)
  {
    total = condominio + gato;
  }
  else
  {
    total = condominio - outro;
  }

  printf("O valor a ser pago de condominio é de %.2f, reais", total);
  return 0;
}
