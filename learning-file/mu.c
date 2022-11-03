#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mu.h"

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
            cadastrar();
        }
        else if (op == 2)
        {
            printf("teste 2\n");
            printf("\t ...Enter para sair");
            getchar();
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
    system("clear");
    printf("Cadastrar Bovinos\n");
    printf("Escolha a funçao quer voce quer fazer\n");
    printf("\n Cadastrar: 1\n");
    printf("\n Listas todos: 2\n");
    printf("\n Sair: 0\n");
}

void cadastrar(void){
    Mu* bovinos;
    bovinos = (Mu*) malloc(sizeof(Mu));
    printf("\nInforme o Nome do bovino\t");
    scanf("%s", bovinos->nome);
    getchar();
    printf("\nInforme o Tipo do bovino\t");
    scanf("%s", bovinos->tipo);
    getchar();
    printf("\nInforme o Sexo do bovino\t");
    scanf("%c", &bovinos->sexo);
    getchar();
    printf("\nInforme a idade do bovino\t");
    scanf("%d", &bovinos->idade);
    getchar();
    bovinos->status = 'C';
    printf("\t ...Enter para sair");
    getchar();
}

void listar(void){

    
}

void mostrar(Mu* bovinos){
    printf("")
}

void grvar(Mu* bovinos) {
    FILE* fp;
    fp = fopen("bovinos.dat", "ab");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar o programa...\n");
        exit(1);
  }
    fwrite(bovinos, sizeof(Mu), 1, fp);
    fclose(fp);
}