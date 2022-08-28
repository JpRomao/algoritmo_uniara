#define CONTA "12345"
#define SENHA "3345"

int autenticar(char conta, char senha)
{
  if (strcmp(conta, CONTA) == 0 && strcmp(senha, SENHA) == 0)
  {
    return 1;
  }
  else
  {
    printf("\nConta ou senha incorretos, tente novamente.\n");
  }

  return 0;
}