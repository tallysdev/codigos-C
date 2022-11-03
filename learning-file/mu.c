#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mu.h"

void menu (void);
void cadastrar (void);
void listar(void);

// animal = (Pet*) malloc(sizeof(Pet));
// Mu* bovinos;

int main(int argc, char const *argv[])
{
    int op;
    menu();
    scanf("%d", &op);
    getchar();
    while (op)
    {
        if (op == 1)
        {
            printf("teste 1\n");
        }
        else if (op == 2)
        {
            printf("teste 2\n");
        }
        else {
            printf("\n\t opção invalida \n");
            menu();
            scanf("%d", &op);
            getchar();
        }        
        
        menu();
        scanf("%d", &op);
        getchar();
    }
    

    return 0;
}

void menu (void) {
    printf("Cadastrar Bovinos\n");
    printf("Escolha a funçao quer voce quer fazer\n");
    printf("\n Cadastrar: 1\n");
    printf("\n Listas todos: 2\n");
    printf("\n Sair: 0\n");
}
