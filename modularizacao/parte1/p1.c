#include <stdio.h>

char ler(void);
char menu(void);
void interacao (void);
void p1it1 (void);

int main(void){

    menu();

    return 0;
}

char ler (void){
    char op;
    printf("Selecione sua opção:");
    scanf("%c" , &op);
    getchar();
    return op;
}

char menu (void){

    char op;
    printf("==================================\n");
    printf("========= Menu de testes =========\n");
    printf("1 - teste 01                      \n");
    printf("2 - teste 02                      \n");
    printf("3 - teste 03                      \n");
    printf("4 - teste 04                      \n");
    printf("0 - exit                          \n");
    printf("==================================\n");
    return op = ler();
}

void interacao (void) {
    char op;
    op = menu();
    while (op != '0')
    {
        
        op = menu();
    }
    
}

void p1it1 (void){

    printf("==================================\n");
    printf("========= Menu de testes =========\n");
    printf("1 - teste 01                      \n");
    printf("2 - teste 02                      \n");
    printf("3 - teste 03                      \n");
    printf("4 - teste 04                      \n");
    printf("0 - exit                          \n");
    printf("==================================\n");
    getchar();
}