#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct vacas Vacas;

struct vacas
{
    char tipo[10];
    float peso;
    char nome[12];
    char raca[12];
    char status;
};

Vacas *cadastrarVacas();
void mostrarVacas(const Vacas* va);
int menu(void);

int menu(void)
{
    int op;
    printf("\nMenu Principal\n");
    printf("1 - Cadastrar Vaca\n");
    printf("2 - Pesquisar Vaca\n");
    printf("3 - Exibir Vaca\n");
    printf("0 - Encerrar programa\n");
    printf("Escolha sua opção: ");
    scanf("%d", &op);
    return op;
}

int main(int argc, char const *argv[])
{
    Vacas *bovinos;

    int op;
    printf("Digite a opcao");
    op = menu();
    while (op != 0)
    {
        if (op == 1)
        {
            bovinos = cadastrarVacas();

        }

        else if (op == 2)
        {
            mostrarVacas(bovinos);
        }
        
        else if (op == 3)
        {
            printf("teste");
        }

        printf("Digite a opcao");
        op = menu();

    }

    return 0;
}

Vacas *cadastrarVacas()
{
    Vacas *vac;
    vac = (Vacas*)malloc(sizeof(Vacas));
    printf("\nInforme o tipo da vaca: ");
    scanf("%s", vac->tipo);
    printf("Informe o peso da vaca: ");
    scanf(" %f", &vac->peso);
    printf("Informe o nome: ");
    scanf(" %50[^\n]", vac->nome);
    printf("Informe a raca da vaca: ");
    scanf(" %20[^\n]", vac->raca);
    vac->status = 'c';
    return vac;
}

void mostrarVacas(const Vacas* va)
{
    char situacao[20];
    printf("\n= = = Vaca Cadastrada = = =\n");
    printf("Tipo da vaca: %s\n", va->tipo);
    printf("Peso da vaca: %f\n", va->peso);
    printf("Nome da vaca: %s\n", va->nome);
    printf("Raça da vaca: %s\n", va->raca);
    if (va->status == 'c')
    {
        strcpy(situacao, "Cadastrada");
    }
    else if (va->status == 'a')
    {
        strcpy(situacao, "Abatida");
    }
       else
    {
        strcpy(situacao, "Vaca roubada");
    }
    printf("Situação da vaquinha: %s\n", situacao);
}

