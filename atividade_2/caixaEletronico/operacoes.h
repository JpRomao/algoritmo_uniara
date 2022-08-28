void mostrarSaldo(float saldo)
{
  printf("Seu saldo é de %.2f\n", saldo);
}

float depositar(float saldo)
{
  float valor;

  printf("\nDigite o valor a ser depositado: ");
  scanf("%f", &valor);

  // Chama "Clean Code"

  if (valor <= 0)
  {
    printf("\nValor de depósito deve ser maior que 0. Tente novamente!\n");

    saldo = depositar(saldo);
  }

  saldo += valor;

  return saldo;
}

float sacar(float saldo)
{
  float valor;

  printf("\nDigite o valor a ser sacado: ");
  scanf("%f", &valor);

  if (valor > saldo)
  {
    printf("\nSaldo insuficiente!\n");
  }
  else if (valor <= 0)
  {
    printf("\nValor de saque deve ser maior que 0. Tente novamente!\n");

    saldo = sacar(saldo);
  }
  else
  {
    saldo -= valor;
  }

  return saldo;
}
