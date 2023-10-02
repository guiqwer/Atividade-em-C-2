#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Digite um valor para A:\n");
  scanf("%d", &a);

  printf("Digite um valor para B:\n");
  scanf("%d", &b);

  if (a == b)
  {
    c = a + b;
    printf("Como A = B a soma dos dois números é de %d", c);
  }
  else
  {
    c = a * b;
    printf("Como A é diferente de B a multiplicação dos dois números é de %d", c);
  }
  return 0;
}
