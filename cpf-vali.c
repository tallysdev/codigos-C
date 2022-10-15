#include <stdio.h>
#include <string.h>

char verificar(char* cpf, int);

char verificar(char* cpf, int tam){
    
    for (int i = 0; i < tam; i++)
    {   
        if (tam < 11 )
        {
            return printf("CPF INVALIDO\n");
        }
        else if ( (cpf[i] < '-' || cpf[i] > '9') || cpf[i] == '/' )
        {
            if (cpf[i] == 46 && (i!= 3 || i!=7))
            {
                return printf("CPF INVALIDO\n");
            }
            
            return printf("CPF INVALIDO\n");

        }
        
        /* code */
    }
    
    // int calc = 0;
    // calc = cpf[0]*10 + cpf[1]*9 + cpf[2]*8 + cpf[3]*7 + cpf[4]*6 + cpf[5]*5 + cpf[6]*4 + cpf[7]*3 + cpf[8]*2;
    // int dv1 = calc % 11;
    // int dv2 = cpf[0]*10 + cpf[1]*9 + cpf[2]*8 + cpf[3]*7 + cpf[4]*6 + cpf[5]*5 + cpf[6]*4 + cpf[7]*3 + cpf[8]*2 + cpf[9]*2;

    // if (dv1 < 2 && cpf[tam-2] != '0';)
    // {
    //     return printf("CPF INVALIDO\n");
    // }
    // else if (dv1 >= 2 && cpf[tam-2] == '0'; )
    // {
    //     return printf("CPF INVALIDO\n");
    // }
    // else if (dv1 >= 2 && cpf[tam-2] != 11-dv1 )
    // {
    //     return printf("CPF INVALIDO\n");
    // }    
    

    return printf("CPF VÁLIDO");
}

int main(int argc, char const *argv[])
{
    char cpf [14];
    // 933.458.070-41
    printf("Insira o CPF:");
    scanf("%s",cpf);
    getchar();
    // printf("%s", cpf);
    int tam = strlen(cpf);
    printf("%d", tam);
    verificar(cpf,tam);

    return 0;
}
