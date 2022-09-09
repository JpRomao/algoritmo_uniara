#include <stdio.h>

int main()
{
  int number;

  printf("Digite um numero de 1 a 10: ");
  scanf("%d", &number);
  getchar();

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
    break;
  case 7:
    printf("Sete");
    break;
  case 8:
    printf("Oito");
    break;
  case 9:
    printf("Nove");
    break;
  case 10:
    printf("Dez");
    break;
  default:
    printf("Numero invalido");
    break;
  }

  return 0;
}