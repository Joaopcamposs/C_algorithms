#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracao inicial de vars
    int opc, nm, it1, it2, it3, it4, tot, perc, media, cont, pares, impares, maior, menor;
    int maiorpar, menorimpar, perci, percp, result, base, exp;

    float soma;

    //laco do menu
    while (opc != 5)
    {
        system ("cls");
        printf ("Bem vindo, escolha uma das opcoes do menu.\n\n");
        printf ("1 - Manipular NRS com intervalos.\n");
        printf ("2 - Manipular Pares, Impares, etc.\n");
        printf ("3 - Calculo de exponencial.\n");
        printf ("4 - Calculo de numero perfeito.\n");
        printf ("5 - Sair.\n");
        printf ("Sua opcao...: ");
        scanf ("%i", &opc);
        
        while (opc < 1 || opc > 5) //validando numero
        {
            printf ("\n\n Invalido, digite outro: ");
            scanf ("%i", &opc);
        }

        if (opc == 1)
        {
            //reiniciando variaveis
            it1 = it2 = it3 = it4 = tot = perc = media = nm = 0;

            while (nm != -1)
            {
                system("cls");
                printf ("Bem vindo ao programa de manipulacao de numeros com intervalos.\n\n");
                printf ("Digite um numero entre 0 e 100, ou -1 para finalizar.\n");
                scanf ("%i", &nm);
                while (nm < -1 || nm > 100)  // validando numero
                {
                    printf ("Invalido, digite outro...: ");
                    scanf ("%i", &nm);
                }
                if (nm != -1)
                {
                    if (nm >= 0 && nm <= 25)
                        it1++;
                    else if (nm >= 26 && nm <= 50)
                        it2++;
                    else if (nm >= 51 && nm <= 75)
                    {
                        it3++;
                        soma = soma + nm;
                    }
                    else if (nm >= 76 && nm <= 100)
                        it4++;
                }
            }
            tot = it1 + it2 + it3 + it4;
            //validar se tot != 0
            if (tot == 0)
            {
                printf ("\n\nNao houve entrada de dados, fim.\n\n");
                //tot != 0
                system ("pause");
            }
            else
            {
                perc = (it2*100)/tot;
                media = soma/it3;
                system ("cls");
                //mostrar resultados
                printf ("Resultado final da entrada de dados....:\n");
                printf ("Intervalo 1 de [ 0 a 25], tivemos %i numeros.\n", it1);
                printf ("Intervalo 2 de [ 26 a 50], tivemos %i numeros.\n", it2);
                printf ("Intervalo 3 de [ 51 a 75], tivemos %i numeros.\n", it3);
                printf ("Intervalo 4 de [ 76 a 100], tivemos %i numeros.\n", it4);
                printf ("%i porcento estao no intervalo 2.\n", perc);
                printf ("%i eh a media dos numeros que estao no intervalo 3.\n", media);
                printf ("\nFIM do programa de intervalo de dados.\n");
                printf ("\nPressione qualquer tecla para voltar ao menu.\n");
                system ("pause");
            }

        }

        if (opc == 2)
        {

            //reiniciando vars
            nm=1, soma=0, media=0, pares=0, impares=0, percp=0, perci=0, maior=0, menor=0;
            maiorpar=0, menorimpar=0, cont=0;

            system ("cls");
            while (nm != 0)
            {
                system ("cls");
                printf ("Bem vindo ao programa de manipular numeros...\n\n");
                printf ("Digite qualquer numero maior que zero ou zero para finalizar: ");
                scanf ("%i", &nm);
                while (nm < 0)
                {
                    printf ("INVALIDO, digite outro...: ");
                    scanf ("%i", &nm);
                }
                if (nm != 0)
                    {
                        //a
                        soma = soma + nm;

                        //b
                        media = soma/cont;

                        //c
                        cont = cont+1;

                        //d, e
                        if (nm%2==0) //par
                            pares++;
                        else          //impar
                            impares++;

                        //f
                        percp = (pares*100)/cont;
                        perci = (impares*100)/cont;

                        //g
                        if (nm > maior)
                            maior = nm;
                        else if (nm < menor)
                            menor = nm;
                        else

                        //h, i
                        if (nm%2==0 && nm > maiorpar)
                            maiorpar = nm;
                        else if (nm%2!=0 && nm < menorimpar)
                            menorimpar = nm;
                    }
            }
            if (cont == 0)
            {
                printf ("\n\n\n nao houve entrada de dados, fim.\n\n\n");
                system ("pause");
            }
            else
                system ("cls");
                printf ("Valor da soma de todos esses numeros informados..: %.1f\n", soma);
                printf ("Valor da media aritmetica entre todos os numeros.: %i\n", media);
                printf ("Quantidade de numeros informados.................: %i\n", cont);
                printf ("Quantidade de numeros pares......................: %i\n", pares);
                printf ("Quantidade de numeros impares....................: %i\n", impares);
                printf ("Percentual de pares e de impares...............: %i e %i\n", percp, perci);
                printf ("O maior e o menor numero informados sao........: %i e %i\n", maior, menor);
                printf ("O maior numero par...............................: %i\n", maiorpar);
                printf ("O menor numero impar.............................: %i\n", menorimpar);
                printf ("\n\n Fim.");
                printf ("\n\n Pressione qualquer tecla para voltar ao menu.\n");
                system ("pause");
        }
        while (opc == 3)
        {
            //reiniciar vars
            base = 1, exp = 1, result=1, cont=0;

            system ("cls");
            printf ("Bem vindo ao programa de calculo de exponencial.\n\n\n");
            printf ("Digite um numero, maior que zero, que sera a base: ");
            scanf ("%i", &base);
            while (base < 0)
            {
                printf ("\n\nINVALIDO, digite outro: ");
                scanf ("%i", &base);
            }
            printf ("\n\nDigite um numero, maior que zero, para ser o expoente: ");
            scanf ("%i", &exp);
            while (exp < 0)
            {
                printf ("\n\nINVALIDO, digite outro: ");
                scanf ("%i", &exp);

            }
            for (base; cont<exp; cont++)
            {
                result = result * base;
            }

            system ("cls");
            printf ("Resultado da exponenciacao: %i" ,result);
            printf ("\n\nFim do programa de exponenciacao.\n");
            printf ("\n\n\nDigite 3 para ir novamente ou qualquer tecla para voltar ao menu. ");
            scanf ("%i", &opc);
            system ("pause");

        }
        if (opc == 4)
        {
            //reiniciando variaveis
            int cont, lim=0, result=0;

            system ("cls");
            printf ("Bem vindo ao programa de calculo de numero perfeito.\n");
            printf ("\nDigite o numero limite, positivo, ou 0 para finalizar: ");
            scanf ("%i", &lim);
            while (lim < 0)
            {
                printf ("\n\n\n INVALIDO, digite outro: ");
                scanf ("%i", &lim);
            }

            for (lim; lim>=1; lim--)//lim = lim de numeros perfeito
            {
                for (cont=1; cont<=lim; cont++)
                if (((lim%cont)==0) && (cont!=lim))
                result=result+cont;
                if (result==lim)
                printf ("\nNumero perfeito: %i\n", result);
                result=0;
            }
            printf ("\n\n\nFIM. Pressione qualquer tecla para continuar.\n");
            system ("pause");
        }
    }

    return 0;
}
