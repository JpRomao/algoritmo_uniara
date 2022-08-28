#include <stdio.h>;

#define NOTA_MINIMA 0
#define NOTA_MAXIMA 10
#define NOTA_MEDIA 6
#define QUANTIDADE_NOTAS 2

int main()
{
  int nota[QUANTIDADE_NOTAS];
  int media;

  while (nota[0] < NOTA_MINIMA || nota[0] > NOTA_MAXIMA)
  {
    printf("Digite a primeira nota: ");
    scanf("%d", &nota[0]);

    if (nota[0] < 0)
    {
      printf("A nota não pode ser negativa!");
    }
    else if (nota[1] > 10)
    {
      printf("A nota não pode ser maior que 10!");
    }
  }

  while (nota[1] < NOTA_MINIMA || nota[1] > NOTA_MAXIMA)
  {
    printf("Digite a segunda nota: ");
    scanf("%d", &nota[0]);

    if (nota[1] < NOTA_MINIMA)
    {
      printf("A nota não pode ser negativa!");
    }
    else if (nota[1] > NOTA_MAXIMA)
    {
      printf("A nota não pode ser maior que 10!");
    }
  }

  media = (nota[0] + nota[1]) / QUANTIDADE_NOTAS;

  printf("\nA media das notas e: %d\n", media);

  if (media > NOTA_MEDIA)
  {
    printf("\nAprovado!");
  }
  else
  {
    printf("\nReprovado!");
  }

  return 0;
}