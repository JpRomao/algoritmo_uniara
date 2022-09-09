#include <stdio.h>

int main()
{
  double salary;
  char option;

  printf("Digite o salario: ");
  scanf("%lf", &salary);
  getchar();

  printf("Qual opcao deseja para aumento?\n\n");

  printf("O salario permace o mesmo (1)\n");
  printf("O salario recebe 5%% de aumento (2)\n");
  printf("O salario recebe 10%% de aumento (3)\n");
  printf("O salario recebe 15%% de aumento (4)\n");
  printf("O salario recebe 20%% de aumento (5)\n");

  printf("Digite a opção desejada: ");
  scanf("%c", &option);
  getchar();

  int selectedOption = option - '0';

  switch (selectedOption)
  {
  case 1:
    printf("\nO salario permanece o mesmo: %.2lf", salary);
    break;
  case 2:
    printf("\nO salario com 5%% de aumento: %.2lf", salary * 1.05);
    break;
  case 3:
    printf("\nO salario com 10%% de aumento: %.2lf", salary * 1.10);
    break;
  case 4:
    printf("\nO salario com 15%% de aumento: %.2lf", salary * 1.15);
    break;
  case 5:
    printf("\nO salario com 20%% de aumento: %.2lf", salary * 1.20);
    break;
  default:
    printf("\nOpcao invalida");
    break;
  }

  return 0;
}