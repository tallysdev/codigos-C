#include <stdio.h>

char ler(void);
char menu(void);


int main(void){



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
    printf("==================================");
    printf("========= Menu de testes =========");
    printf("1 - teste 01                      ");
    printf("2 - teste 02                      ");
    printf("3 - teste 03                      ");
    printf("4 - teste 04                      ");
    printf("==================================");
    return op = ler();
}

void interacao (void) {

}