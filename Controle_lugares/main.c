#include <stdio.h>
#include <stdlib.h>
// 0 = livre
// 1 = ocupado
// 2 = reservado

char verif_lado()
{
    char lado;
    printf("Lado A ou Lado B: ");
    fflush(stdin);
    scanf("%c", &lado);

    return lado;
}

void menu()
{
    printf("\nMenu:\n");
    printf("0-Sair\n");
    printf("1-Reservar\n");
    printf("2-Vender\n");
    printf("3-Liberar\n");
    printf("4-Consultar\n");
    printf("Opcao: ");
}

int main()
{
    int opc = -1;
    int mA[8][5];
    int mB[8][5];
    char lado;
    int status = 0;

    for (int l = 0; l < 8; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            mA[l][c] = 0;
            mB[l][c] = 0;
        }
    }

    while (opc != 0)
    {

        menu();
        scanf("%d", &opc);

        switch (opc)
        {

        case 1: // Reservar
            lado = verif_lado();
            if (lado == 'a')
            { // lado A

                int i = 0;
                int j = 0;

                printf("\nNumero da fileira (0 a 7): ");
                scanf("%d", &i);
                printf("\nNumero da coluna (0 a 4): ");
                scanf("%d", &j);

                if (mA[i][j] == 0)
                {
                    mA[i][j] = 2;
                    printf("\nFoi feita a reserva!\n");
                }
                else if (mA[i][j] == 1)
                {
                    printf("\nJa foi vendido");
                }
                else
                {
                    printf("\nLugar ja foi Reservado!\n");
                }
            }
            else
            { // Lado b

                int i = 0;
                int j = 0;

                printf("\nNumero da fileira (0 a 7): ");
                scanf("%d", &i);
                printf("\nNumero da coluna (0 a 4): ");
                scanf("%d", &j);

                if (mB[i][j] == 0)
                {
                    mB[i][j] = 2;
                    printf("\nFoi feita a reserva!\n");
                }
                else if (mB[i][j] == 1)
                {
                    printf("\nJa foi vendido");
                }
                else
                {
                    printf("\nLugar ja foi Reservado!\n");
                }
            }
            break;

        case 2:
            lado = verif_lado();
            if (lado == 'a')
            { // lado A

                int i = 0;
                int j = 0;

                printf("\nNumero da fileira (0 a 7): ");
                scanf("%d", &i);
                printf("\nNumero da coluna (0 a 4): ");
                scanf("%d", &j);

                if (mA[i][j] == 0)
                {
                    mA[i][j] = 1;
                    printf("\nFoi feita a venda!\n");
                }
                else if (mA[i][j] == 1)
                {
                    printf("\nJa foi vendido");
                }
                else
                {
                    printf("\nLugar ja foi Reservado!\n");
                }
            }
            else
            { // Lado b

                int i = 0;
                int j = 0;

                printf("\nNumero da fileira (0 a 7): ");
                scanf("%d", &i);
                printf("\nNumero da coluna (0 a 4): ");
                scanf("%d", &j);

                if (mB[i][j] == 0)
                {
                    mB[i][j] = 1;
                    printf("\nFoi feita a venda!\n");
                }
                else if (mB[i][j] == 1)
                {
                    printf("\nJa foi vendido");
                }
                else
                {
                    printf("\nLugar ja foi Reservado!\n");
                }
            }

            break;

        case 3:
            lado = verif_lado();
            if (lado == 'a')
            { // lado A

                int i = 0;
                int j = 0;

                printf("\nNumero da fileira (0 a 7): ");
                scanf("%d", &i);
                printf("\nNumero da coluna (0 a 4): ");
                scanf("%d", &j);

                if (mA[i][j] == 0)
                {
                    printf("\nLugar Livre!\n");
                }
                else if (mA[i][j] == 1)
                {
                    mA[i][j] = 0;
                    printf("\nLugar Vendido. Foi liberado!");
                }
                else
                {
                    mA[i][j] = 0;
                    printf("\nLugar Reservado. Foi liberado!\n");
                }
            }
            else
            { // Lado b

                int i = 0;
                int j = 0;

                printf("\nNumero da fileira (0 a 7): ");
                scanf("%d", &i);
                printf("\nNumero da coluna (0 a 4): ");
                scanf("%d", &j);

                if (mB[i][j] == 0)
                {
                    printf("\nLugar Livre!\n");
                }
                else if (mB[i][j] == 1)
                {
                    mB[i][j] = 0;
                    printf("\nLugar vendido. Foi liberado!");
                }
                else
                {
                    mB[i][j] = 0;
                    printf("\nLugar Reservado. Foi liberado!\n");
                }
            }
            break;

        case 4:
            lado = verif_lado();
            if (lado == 'a')
            { // lado A

                int i = 0;
                int j = 0;

                printf("\nNumero da fileira (0 a 7): ");
                scanf("%d", &i);
                printf("\nNumero da coluna (0 a 4): ");
                scanf("%d", &j);

                if (mA[i][j] == 0)
                {
                    printf("\nLugar Livre!\n");
                }
                else if (mA[i][j] == 1)
                {
                    printf("\nLugar vendido");
                }
                else
                {
                    printf("\nLugar Reservado!\n");
                }
            }
            else
            { // Lado b

                int i = 0;
                int j = 0;

                printf("\nNumero da fileira (0 a 7): ");
                scanf("%d", &i);
                printf("\nNumero da coluna (0 a 4): ");
                scanf("%d", &j);

                if (mB[i][j] == 0)
                {
                    printf("\nLugar Livre!\n");
                }
                else if (mB[i][j] == 1)
                {
                    printf("\nLugar vendido");
                }
                else
                {
                    printf("\nLugar Reservado!\n");
                }
            }
            break;
        }
    }

    return 0;
}
