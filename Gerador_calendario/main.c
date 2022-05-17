#include <stdio.h>
#include <stdlib.h>

// 31, 28/29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31.

int bissexto(int ano);
int diasemana(int dia, int mes, int ano);
void printCalendario(int bst);

int main()
{
    int ano, bst, mes, dia;

    printf("Digite o ano: ");
    scanf("%i", &ano);
    bst = bissexto(ano); // 1 bissexto ou 0 normal

    // printf("Digite o mes e dia: ");
    // scanf("%i %i", &mes, &dia);
    // printf("\nDia da semana: %i\n", diasemana(dia, mes, ano) + 1);

    printCalendario(bst);

    return 0;
}

int bissexto(int ano)
{
    int b;

    if (ano % 4 == 0)
        b = 1;
    else
        b = 0;

    return b;
}

// Funcao para calcular o dia da semana do primeiro dia do ano
int diasemana(int dia, int mes, int ano)
{
    int D = ano + dia + 3 * (mes - 1) - 1;
    if (mes < 3)
        ano--;
    else
        D -= (int)(0.4 * mes + 2.3);
    D += (int)(ano / 4) - (int)((ano / 100 + 1) * 0.75);
    D %= 7;

    return D;
}

void mes28()
{
    printf("\tD  \tS  \tT  \tQ  \tQ  \tS  \tS\n\n");
    int contlinha = 0;
    int numero = 1;
    while (numero <= 28)
    {
        while (contlinha < 7 && numero <= 28)
        {
            if (numero <= 28)
            {
                printf("\t%i", numero);
                numero++;
                contlinha++;
            }
        }
        if (numero <= 28)
        {
            printf("\n");
            contlinha = 0;
        }
    }
    printf("\n\n");
}

void mes29()
{
    printf("\tD  \tS  \tT  \tQ  \tQ  \tS  \tS\n\n");
    int contlinha = 0;
    int numero = 1;
    while (numero <= 29)
    {
        while (contlinha < 7 && numero <= 29)
        {
            if (numero <= 29)
            {
                printf("\t%i", numero);
                numero++;
                contlinha++;
            }
        }
        if (numero <= 29)
        {
            printf("\n");
            contlinha = 0;
        }
    }
    printf("\n\n");
}

void mes30()
{
    printf("\tD  \tS  \tT  \tQ  \tQ  \tS  \tS\n\n");
    int contlinha = 0;
    int numero = 1;
    while (numero <= 30)
    {
        while (contlinha < 7 && numero <= 30)
        {
            if (numero <= 30)
            {
                printf("\t%i", numero);
                numero++;
                contlinha++;
            }
        }
        if (numero <= 30)
        {
            printf("\n");
            contlinha = 0;
        }
    }
    printf("\n\n");
}

void mes31()
{
    printf("\tD  \tS  \tT  \tQ  \tQ  \tS  \tS\n\n");
    int contlinha = 0;
    int numero = 1;
    while (numero <= 31)
    {
        while (contlinha < 7 && numero <= 31)
        {
            if (numero <= 31)
            {
                printf("\t%i", numero);
                numero++;
                contlinha++;
            }
        }
        if (numero <= 31)
        {
            printf("\n");
            contlinha = 0;
        }
    }
    printf("\n\n");
}

void printCalendario(int bst)
{
    printf("\nJaneiro\n");
    mes31();

    if (bst == 1)
    {
        printf("Fevereiro\n");
        mes29();
    }
    else
    {
        printf("Fevereiro\n");
        mes28();
    }

    printf("Marco\n");
    mes31();
    printf("Abril\n");
    mes30();
    printf("Maio\n");
    mes31();
    printf("Junho\n");
    mes30();
    printf("Julho\n");
    mes31();
    printf("Agosto\n");
    mes31();
    printf("Setembro\n");
    mes30();
    printf("Outubro\n");
    mes31();
    printf("Novembro\n");
    mes30();
    printf("Dezembro\n");
    mes31();
}
