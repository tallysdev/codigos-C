#include <stdio.h>
#include <string.h>

char verificar(char *cpf, int);

char verificar(char *cpf, int tam)
{

    if (tam < 11)
    {
        return 0;
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
            dv1 = (calc * 10) % 11;
        }
        mult = 11;
        calc = 0;
        for (int i = 0; i < 10; i++)
        {
            calc = calc + ((cpf[i] - 48) * mult);
            mult = mult - 1;
            dv2 = (calc * 10) % 11;
        }

        if ((dv1 == 10))
        {
            dv1 = 0;
        }
        if ((dv2 == 10))
        {
            printf("dd");
            dv2 = 0;
        }

        char dc1, dc2;
        dc1 = dv1 + '0';
        dc2 = dv2 + '0';

        if ((dv1 == 10 && cpf[tam - 2] != '0') || (dv2 == 10 && cpf[tam - 1] != '0'))  {
            printf("entrou na 81");
            return 0;
        }
        else if ((cpf[tam - 2] != dc1) || (cpf[tam - 1] != dc2))
        {
            printf("%d\n", dv1);
            printf("%d\n", dv2);
            printf("%d\n", dc1);
            printf("%d\n", dc2);

            return 0;
        }

        // if ((dv1 < 2 && cpf[tam - 2] != '0') || (dv2 < 2 && cpf[tam - 1] != '0'))
        // {
        //     printf("entrou na 76");
        //     return 0;
        // }
        // else if ((dv1 == 10 && cpf[tam - 2] != '0') || (dv2 == 10 && cpf[tam - 1] != '0'))
        // {
        //     printf("entrou na 81");
        //     return 0;
        // }
        // else if ((dv1 >= 2 && cpf[tam - 2] != dc1) || (dv2 >= 2 && cpf[tam - 1] != dc2))
        // {
        //     printf("%d", dv1);
        //     printf("%d", dv2);
        //     printf("%c", dc1);
        //     printf("%c", dc2);

        //     return 0;
        // }
    }

    else if (tam > 11)
    {
        return 0;
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
        getchar();
        tam = strlen(cpf);
        // printf("%s", cpf);
    }

    return 0;
}
