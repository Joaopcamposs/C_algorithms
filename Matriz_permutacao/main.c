#include <stdio.h>

#define max 100

int permutacao(int matriz[max][max], int n)
{
  int verdade = 1, i, j; // verdade = 1 implica que admitimos inicialmente que a matriz é permutação
  int soma_coluna[max], soma;

  for (i = 0; i < n; i++)
    soma_coluna[i] = 0;

  for (i = 0; i < n && verdade == 1; i++)
  {
    soma = 0;
    for (j = 0; j < n && verdade == 1; j++)
    {
      if (matriz[i][j] != 1 && matriz[i][j] != 0)
        verdade = 0;
      else
      {
        soma_coluna[j] += matriz[i][j];
        soma += matriz[i][j];
      }
    }
    if (soma != 1)
      verdade = 0;
  }

  for (i = 0; i < n && verdade == 1; i++)
    if (soma_coluna[i] != 1)
      verdade = 0;

  return verdade;
}

int main()
{
  int matriz[max][max], i, j, n, perm;

  printf("Entre com a ordem da matriz: ");
  scanf("%d", &n);

  printf("Entre com os dados da matriz:\n");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      printf("Posicao [%i][%i]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }

  perm = permutacao(matriz, n);

  if (perm == 1)
    printf("A matriz eh permutacao\n");
  else
    printf("A matriz nao eh permutacao\n");

  return 0;
}
