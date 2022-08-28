#include <stdio.h>
#include <locale.h>

#include "operacoes.h"
#include "conta.h"

#define OPCAO_SAQUE 1
#define OPCAO_DEPOSITO 2
#define OPCAO_SALDO 3
#define OPCAO_SAIR 4

#define SALDO_INICIAL 50000

int main()
{
  setlocale(LC_ALL, "Portuguese");

  char conta[5];
  char senha[4];

  float saldo = SALDO_INICIAL;
  float saque;
  float deposito;

  int isSectionActive = 0;

  while (!isSectionActive)
  {
    printf("Digite sua conta (6 números): ");
    scanf("%s", &conta);

    printf("\nDigite sua senha (8 números): ");
    scanf("%s", &senha);

    isSectionActive = autenticar(conta, senha);
  }

  int opcao = 0;

  while (isSectionActive && opcao != OPCAO_SAIR)
  {
    printf("\nEscolha uma opção:\n");

    printf("1 - Saque\n");
    printf("2 - Depósito\n");
    printf("3 - Saldo\n");
    printf("4 - Sair\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case OPCAO_SAQUE:
      saldo = sacar(saldo);
      break;

    case OPCAO_DEPOSITO:
      saldo = depositar(saldo);
      break;

    case OPCAO_SALDO:
      mostrarSaldo(saldo);
      break;

    case OPCAO_SAIR:
      printf("\nObrigado por utilizar nossos serviços.\n");
      break;

    default:
      printf("\nOpção inválida.\n");
      break;
    }
  }

  return 0;
}