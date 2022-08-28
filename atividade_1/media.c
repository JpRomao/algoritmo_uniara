#include <stdio.h>

int main()
{
  int quantidadeDeNumeros;

  printf("Digite a quantidade de números que estarão nesta média: ");
  scanf("%i", &quantidadeDeNumeros);

  float numeros[quantidadeDeNumeros];

  int i = 0;
  float media = 0;

  for (i; i < quantidadeDeNumeros; i++)
  {
    printf("Digite o número %i: ", i + 1);
    scanf("%f", &numeros[i]);

    media = media + numeros[i];
  }

  media = media / quantidadeDeNumeros;

  printf("\n A média desses números é: %.2f", media);

  return 0;
}