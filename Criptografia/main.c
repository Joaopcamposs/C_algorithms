#include <stdio.h>
#include <string.h>

int main()
{
    char frase[50];
    int i = 0, chave = 3, enc = 0, op = 0;

    while (op != 3)
    {
        system("cls");
        printf("    Menu \n  ");
        printf("\n1 - Para criptografar um texto");
        printf("\n2 - Para descriptografar um texto");
        printf("\n3 - Para sair");
        printf("\nEscolha...: ");
        scanf("%i", &op);
        fflush(stdin);

        if (op != 3)
        {
            if (op == 1)
            {
                system("cls");
                printf("Digite a frase a ser encriptada: ");
                gets(frase);

                printf("\nFrase encriptada com sucesso!\n\n");
                printf("Encriptacao:  ");

                for (i = 0; i < strlen(frase); i++) // strlen mede o numero de caracteres da string
                {
                    int enc = (int)frase[i] + chave;
                    enc = verificar_ida(enc);

                    printf("%c", (char)enc);
                }
                printf("\n\n\n");
                system("pause");
            }

            if (op == 2)
            {
                system("cls");
                printf("Digite a frase a ser descriptografada: ");
                gets(frase);

                printf("\nFrase descriptografada com sucesso!\n\n");
                printf("Descriptografia:  ");

                for (i = 0; i < strlen(frase); i++) // strlen mede o numero de caracteres da string
                {
                    int enc = (int)frase[i] - chave;
                    enc = verificar_volta(enc);

                    printf("%c", (char)enc);
                }
                printf("\n\n\n");
                system("pause");
            }
        }
    }

    printf("\n\n");
    return 0;
}

int verificar_ida(int enc)
{
    if (enc == 35) // espa�o
        enc = 32;

    else if (enc == 91) // X
        enc = 65;

    else if (enc == 92) // Y
        enc = 66;

    else if (enc == 93) // Z
        enc = 64;

    else if (enc == 123) // x
        enc = 97;

    else if (enc == 124) // y
        enc = 98;

    else if (enc == 125) // z
        enc = 99;

    return enc;
}

int verificar_volta(int enc)
{
    if (enc == 29) // espa�o
        enc = 32;

    else if (enc == 64) // C
        enc = 90;

    else if (enc == 63) // B
        enc = 89;

    else if (enc == 62) // A
        enc = 88;

    else if (enc == 96) // c
        enc = 122;

    else if (enc == 95) // b
        enc = 121;

    else if (enc == 94) // a
        enc = 120;

    return enc;
}
