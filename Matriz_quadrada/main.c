#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

void printar_matriz(int V[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%i", V[i][j]);
        }
    }
}

void le_vetor(int V[MAX], int nc)
{
    printf("Digite %d numeros: ", nc);
    for (int i = 0; i < nc; i++)
        scanf("%d", &V[i]);
}

void le_matriz(int M[MAX][MAX], int nl, int nc)
{
    for (int i = 0; i < nl; i++)
    {
        printf("Linha %d da matriz\n", i);
        le_vetor(M[i], nc);
    }
}

int main()
{

    int n, i, j, soma_inicial, soma1, soma2, igual = TRUE;
    int A[MAX][MAX];

    printf("Digite a ordem da matriz A: ");
    fflush(stdin);
    scanf("%d", &n);

    if (n == 0)
        return 0;

    printf("Entrada dos elementos da matriz A\n");
    le_matriz(A, n, n);

    soma_inicial = 0;
    soma2 = 0;

    for (j = 0; j < n; j++)
    {
        soma_inicial += A[0][j];
        soma2 += A[j][0];
    }

    igual = soma_inicial == soma2;

    for (i = 1; igual && i < n; i++)
    {
        /* soma1 => contem a soma da linha i  E  soma2 => contem a soma da coluna i */
        soma1 = 0;
        soma2 = 0;
        for (j = 0; j < n; j++)
        {
            soma1 += A[i][j];
            soma2 += A[j][i];
        }
        igual = (soma1 == soma2 && soma2 == soma_inicial);
    }

    if (igual)
    { /* Calcula a soma das diagonais*/
        soma1 = 0;
        soma2 = 0;
        for (j = 0; j < n; j++)
        {
            soma1 += A[j][j];
            soma2 += A[j][n - j - 1];
        }
        igual = (soma1 == soma2 && soma2 == soma_inicial);
    }

    printar_matriz(A, n);

    if (igual)
        printf("\nMatriz A eh um quadrado magico!");
    else
        printf("\nMatriz A nao eh um quadrado magico!");

    return 0;
}
