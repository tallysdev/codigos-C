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
            // listar();
            printf("Listar todos\n");
            printf("\t ...Enter para sair");
            getchar();
        }
        else if (op == 3)
        {
            // editar();
            printf("Editar\n");
            printf("\t ...Enter para sair");
            getchar();
        }
        else if (op == 4)
        {
            // excluir();           
            printf("Exluir\n");
            printf("\t ...Enter para sair");
            getchar();
        }
        else if (op == 5)
        {
            buscar();
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
    printf("\n Editar: 3\n");
    printf("\n Excluir: 4\n");
    printf("\n Buscar um: 5\n");
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
    mostrar(bovinos);
    gravar(bovinos);
    free(bovinos);
    printf("\t ...Enter para sair");
    getchar();
}

void listar(void){

    
}

void mostrar(Mu* bovinos){
    printf("\nNome do Bovino: %s\t", bovinos->nome);
    printf("\nTipo do Bovino: %s\t", bovinos->tipo);
    printf("\nSexo do Bovino: %c\t", bovinos->sexo);
    printf("\nIdade do Bovino: %d\t", bovinos->idade);
    printf("\nStatus do Bovino: %c\t", bovinos->status);
    printf("\t ...Enter para sair");
    getchar();
}


void gravar(Mu* bovinos) {
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

void buscar(void) {
    FILE* fp;
    Mu* bovinos;
    int resultado;
    char nomeBusca[51];
    fp = fopen("bovinos.dat", "rb");
    if (fp == NULL)
    {
        /* code */
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar o programa...\n");
        exit(1);
    }
    system("clear");
    printf("\n informe o nome do bovino que voce busca\t");
    scanf("%s", nomeBusca);
    bovinos = (Mu*)malloc(sizeof(Mu));
    resultado = 0;
    while ((!resultado) && (fread(bovinos, sizeof(Mu),1,fp)))
    {
        /* code */
        if ((strcmp(bovinos->nome, nomeBusca) == 0) && (bovinos->status == 'C'))
        {
            /* code */
            resultado = 1;
        }
        
    }
    fclose(fp);
    if (resultado)
    {
        /* code */
        mostrar(bovinos);
    } else {
        printf("Bovino %s não encontrado...", nomeBusca);
    }
    free(bovinos);
}