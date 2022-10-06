#include <stdio.h>

int main(int argc, char const *argv[])
{
    char plano[3][3] = {'#','#','#',
                        '#','#','#',
                        '#','#','#'};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%c\t", plano[i][j]);
    printf("\n");
  }

    printf("De zero a nove escolha a opção desejada para o x");
    


    /* code */
    return 0;
}
