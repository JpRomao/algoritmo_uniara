#include <stdio.h>

int main()
{
  int number;

  printf("Digite um numero: ");
  scanf("%d", &number);
  getchar();

  if (number <= 0 && number > 10)
  {
    return;
  }

  printf("O numero digitado foi: ");

  switch (number)
  {
  case 1:
    printf("Um");
    break;
  case 2:
    printf("Dois");
    break;
  case 3:
    printf("Tres");
    break;
  case 4:
    printf("Quatro");
    break;
  case 5:
    printf("Cinco");
    break;
  case 6:
    printf("Seis");
  case 7:
    printf("Sete");
  case 8:
    printf("Oito");
  case 9:
    printf("Nove");
  case 10:
    printf("Dez");
  }

  return 0;
}