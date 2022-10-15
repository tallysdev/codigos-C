#include <stdio.h>
#include <string.h>

char verificar(char *cpf, int);

char verificar(char *cpf, int tam)
{

    for (int i = 0; i < tam; i++)
    {
        if (tam < 11)
        {
            return printf("CPF INVALIDO\n");
        }
        else if ((cpf[i] < '-' || cpf[i] > '9') || cpf[i] == '/')
        {
            if (cpf[i] == 46 && (i != 3 || i != 7))
            {
                return printf("CPF INVALIDO\n");
            }

            return printf("CPF INVALIDO\n");
        }

        /* code */
    }
    if (tam == 11)
    {
        /* code */
        int calc = 0;
        calc = cpf[0] * 10 + cpf[1] * 9 + cpf[2] * 8 + cpf[3] * 7 + cpf[4] * 6 + cpf[5] * 5 + cpf[6] * 4 + cpf[7] * 3 + cpf[8] * 2;
        int dv1 = calc % 11;
        int dv2 = (cpf[0] * 11 + cpf[1] * 10 + cpf[2] * 9 + cpf[3] * 8 + cpf[4] * 7 + cpf[5] * 6 + cpf[6] * 5 + cpf[7] * 4 + cpf[8] * 3 + cpf[9] * 2) % 11;

        if ((dv1 < 2 && cpf[tam - 2] != '0') || (dv2 < 2 && cpf[tam - 2] != '0'))
        {
            return printf("CPF INVALIDO\n");
        }
        else if ((dv1 >= 2 && cpf[tam - 2] == '0') || (dv2 >= 2 && cpf[tam - 2] == '0'))
        {
            return printf("CPF INVALIDO\n");
        }
        else if ((dv1 >= 2 && cpf[tam - 2] != 11 - dv1) || (dv2 >= 2 && cpf[tam - 2] != 11 - dv2))
        {
            return printf("CPF INVALIDO\n");
        }

    } 
    
    else if (tam > 11)
    {
        int calc = 0;
        calc = cpf[0] * 10 + cpf[1] * 9 + cpf[2] * 8 + cpf[4] * 7 + cpf[5] * 6 + cpf[6] * 5 + cpf[8] * 4 + cpf[9] * 3 + cpf[10] * 2;
        int dv1 = calc % 11;
        int dv2 = (cpf[0] * 11 + cpf[1] * 10 + cpf[2] * 9 + cpf[4] * 8 + cpf[5] * 7 + cpf[6] * 6 + cpf[8] * 5 + cpf[9] * 4 + cpf[10] * 3 + cpf[12] * 2) % 11;
        char dc1, dc2; 
        dc1 = (11 - dv1)+48;
        dc2 = (11 - dv2)+48; 
        if ((dv1 < 2 && cpf[12] != '0') || (dv2 < 2 && cpf[13] != '0'))
        {
            return printf("CPF a\n");
        }
        else if ((dv1 >= 2 && cpf[12] == '0') || (dv2 >= 2 && cpf[13] == '0'))
        {
            return printf("CPF b\n");
        }
        
        else if ((dv1 >= 2 && cpf[12] != dc1) || (dv2 >= 2 && cpf[13] != dc2))
        {
            return printf("CPF c\n");
        } 
        else{
            return printf("CPF VÁLIDO");
        }
    }
    

    return printf("CPF VÁLIDO");
}

int main(int argc, char const *argv[])
{
    char cpf[14];
    // 933.458.070-41
    printf("Insira o CPF:");
    scanf("%s", cpf);
    getchar();
    // printf("%s", cpf);
    int tam = strlen(cpf);
    printf("%d", tam);
    printf("%c\n", cpf[12]);
    printf("%c\n", cpf[13]);
    verificar(cpf, tam);

    return 0;
}
