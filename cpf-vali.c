#include <stdio.h>

char verificar(char* cpf, int);

char verificar(char* cpf, int tam){
    
    for (int i = 0; i < tam; i++)
    {   
        if (cpf[i] == NULL)
        {
            return printf("CPF INVALIDO\n");
        }
        else if ( (cpf[i] > 45 || cpf[i] < 57) && cpf[i] == 47 )
        {
            return printf("CPF INVALIDO\n");

        }
        
        /* code */
    }
    
    return 0;
}

int main(int argc, char const *argv[])
{
    char cpf [11];
    printf("Insira o CPF:");
    scanf("%s",cpf);
    getchar();
    // printf("%s", cpf);
    int tam = sizeof(cpf)/sizeof(cpf[0]);
    verificar(cpf,tam);

    return 0;
}
