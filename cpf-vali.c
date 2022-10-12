#include <stdio.h>

char verificar(char cpf[], int);

char verificar(char cpf[], int tam){
    
    if (tam<11)
    {
        return printf("CPF invalido");
    }
    
    return -1;
}

int main(int argc, char const *argv[])
{
    char cpf [11];
    printf("Insira o CPF:");
    scanf("%s",cpf);
    getchar();
    printf("%s", cpf);
    int tam = sizeof(cpf)/sizeof(cpf[0]);
    verificar(cpf,tam);

    return 0;
}
