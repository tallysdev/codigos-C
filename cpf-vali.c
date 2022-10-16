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

        int calc = 0;
        calc = (cpf[0] - 48 )* 10 + (cpf[1] - 48 )* 9 + (cpf[2] - 48 )* 8 + (cpf[3] - 48 )* 7 + (cpf[4] - 48 )* 6 + (cpf[5] - 48 )* 5 + (cpf[6] - 48 )* 4 + (cpf[7] - 48 )* 3 + (cpf[8] - 48 )* 2;
        int dv1 = calc % 11;
        int dv2 = ((cpf[0] - 48 )* 11 + (cpf[1] - 48 )* 10 + (cpf[2] - 48 )* 9 + (cpf[3] - 48 )* 8 + (cpf[4] - 48 )* 7 + (cpf[5] - 48 )* 6 + (cpf[6] - 48 )* 5 + (cpf[7] - 48 )* 4 + (cpf[8] - 48 )* 3 + (cpf[9] - 48 )* 2) % 11;

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
        calc = (cpf[0] - 48) * 10 + (cpf[1] - 48) * 9 + (cpf[2] - 48) * 8 + (cpf[4] - 48) * 7 + (cpf[5] - 48) * 6 + (cpf[6] - 48) * 5 + (cpf[8] - 48) * 4 + (cpf[9] - 48) * 3 + (cpf[10] - 48) * 2;
        int dv1 = calc % 11;
        int dv2 = ((cpf[0] - 48 )* 11 + (cpf[1] - 48 )* 10 + (cpf[2] - 48 )* 9 + (cpf[4] - 48 )* 8 + (cpf[5] - 48 )* 7 + (cpf[6] - 48 )* 6 + (cpf[8] - 48 )* 5 + (cpf[9] - 48 )* 4 + (cpf[10] - 48 )* 3 + (cpf[12] - 48 )* 2) % 11;
        char dc1, dc2; 
        dc1 = (11 - dv1) + 48;
        dc2 = (11 - dv2) + 48; 
        if ((dv1 < 2 && cpf[12] != '0') || (dv2 < 2 && cpf[13] != '0'))
        {   
            printf("%c\n",dv1);
            printf("%c\n",dv2);
            return printf("CPF INVALIDO\n");
        }
        else if ((dv1 >= 2 && cpf[12] == '0') || (dv2 >= 2 && cpf[13] == '0'))
        {
            return printf("CPF INVALIDO\n");
        }
        
        else if ((dv1 >= 2 && cpf[12] != dc1) || (dv2 >= 2 && cpf[13] != dc2))
        {
            printf("%c\n",dc1);
            printf("%c\n",dc2);
            return printf("CPF INVALIDO\n");
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
    printf("Insira o CPF:");
    scanf("%s", cpf);
    getchar();
    int tam = strlen(cpf);
    int z = (cpf[2] - 48) * 2;
    printf("%d\n", z);
    verificar(cpf, tam);

    return 0;
}
