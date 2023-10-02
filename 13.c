#include <stdio.h>

int main()
{
  int idade;
  char turma;

  printf("Digite a idade da criança: ");
  scanf("%d", &idade);

  if (idade >= 4 && idade <= 5)
  {
    turma = 'a';
  }
  else if (idade >= 6 && idade <= 8)
  {
    turma = 'b';
  }
  else if (idade >= 9 && idade <= 10)
  {
    turma = 'c';
  }
  else
  {
    turma = 's';
  }

  if (turma == 's')
  {
    printf("A escolinha não possui turmas para esta criança.\n");
  }
  else
  {
    printf("A criança irá para a turma %c.\n", turma);
  }

  return 0;
}
