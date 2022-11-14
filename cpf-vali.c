#include <stdio.h>
#include <string.h>

char verificar(char *cpf, int);

char verificar(char *cpf, int tam)
{

    for (int i = 0; i < tam; i++)
    {

        // printf("%d\n i \t",i);
        printf("%c cpf \t", cpf[i]);

        if (tam < 11)
        {
            return 0;
        }

        else if ((cpf[i] <= ',' || cpf[i] >= ':') || cpf[i] == '/')
        {
            printf("Entrou aaqui");

            return 0;
        }

        else if ((cpf[i] == 46 && (i != 3 && i != 7)) || (cpf[i] == 45 && (i != 11)))
        {
            printf("Entrou a 29");            // printf("%c\t cpf position", cpf[i]);
            // printf("%d\n", i);
            return 0;
        }

        /* code */
    }
    if (tam == 11)
    {
        int calc = 0;
        int mult = 10;
        int dv1, dv2;
        for (int i = 0; i < 9; i++)
        {
            calc = calc + ((cpf[i] - 48) * mult);
            mult = mult - 1;
            dv1 = calc % 11;
        }
        mult = 11;
        calc = 0;
        for (int i = 0; i < 10; i++)
        {
            calc = calc + ((cpf[i] - 48) * mult);
            mult = mult - 1;
            dv2 = calc % 11;
        }
        char dc1, dc2;
        dc1 = (11 - dv1) + 48;
        dc2 = (11 - dv2) + 48;
        if ((dv1 < 2 && cpf[tam - 2] != '0') || (dv2 < 2 && cpf[tam - 2] != '0'))
        {
            return 0;
        }
        else if ((dv1 >= 2 && cpf[tam - 2] == '0') || (dv2 >= 2 && cpf[tam - 2] == '0'))
        {
            return 0;
        }
        else if ((dv1 >= 2 && cpf[tam - 2] != dc1) || (dv2 >= 2 && cpf[tam - 1] != dc2))
        {
            return 0;
        }
    }

    else if (tam > 11)
    {
        int calc = 0;
        calc = (cpf[0] - 48) * 10 + (cpf[1] - 48) * 9 + (cpf[2] - 48) * 8 + (cpf[4] - 48) * 7 + (cpf[5] - 48) * 6 + (cpf[6] - 48) * 5 + (cpf[8] - 48) * 4 + (cpf[9] - 48) * 3 + (cpf[10] - 48) * 2;
        int dv1 = calc % 11;
        int dv2 = ((cpf[0] - 48) * 11 + (cpf[1] - 48) * 10 + (cpf[2] - 48) * 9 + (cpf[4] - 48) * 8 + (cpf[5] - 48) * 7 + (cpf[6] - 48) * 6 + (cpf[8] - 48) * 5 + (cpf[9] - 48) * 4 + (cpf[10] - 48) * 3 + (cpf[12] - 48) * 2) % 11;
        char dc1, dc2;
        dc1 = (11 - dv1) + 48;
        dc2 = (11 - dv2) + 48;
        if ((dv1 < 2 && cpf[12] != '0') || (dv2 < 2 && cpf[13] != '0'))
        {
            return 0;
        }
        else if ((dv1 >= 2 && cpf[12] == '0') || (dv2 >= 2 && cpf[13] == '0'))
        {
            return 0;
        }

        else if ((dv1 >= 2 && cpf[12] != dc1) || (dv2 >= 2 && cpf[13] != dc2))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    int cont = 0;
    for (int i = 0; i < tam; i++)
    {
        if (i > 0 && cpf[i] == cpf[i - 1])
        {
            cont = cont + 1;

            if (cont == tam - 1)
            {
                return 0;
            }
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    char cpf[14];
    printf("Insira o CPF: 073.167.440-57\t");
    scanf("%s", cpf);
    getchar();
    int tam = strlen(cpf);
    while (!verificar(cpf, tam))
    {
        printf("CPF INVALIDO\n");
        printf("Insira o CPF: 073.167.440-57\t");
        scanf("%s", cpf);
        printf("%s", cpf);
        getchar();
    }

    return 0;
}
