#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pc (char plano[][]);
int verificar(char **plano[][] ,int);

int verificar(char **plano[3][3],int posicao) {
  
  if (posicao >= 1 || posicao <= 3)
      {
        if (plano[0][posicao-1] = '#')
        {
          return 0;
        }
         
      }
      else if (posicao >= 4 || posicao <= 6)
      {
        plano[1][posicao-4] = '@';
      }
      else
      {
        plano[2][posicao-7] = '@';
      } 

}

void pc(char plano[][]) {

}

int posicao;

int main(int argc, char const *argv[])
{
    char plano[3][3] = {'#','#','#',
                        '#','#','#',
                        '#','#','#'};

  //   for (int i = 0; i < 3; i++) {
  //       for (int j = 0; j < 3; j++)
  //           printf("%c\t", plano[i][j]);
  //   printf("\n");
  // }
  int jogar = 1;
    while (jogar)
    {
      srand(time(NULL));
      int posicao;
      posicao = rand() %9;
      if (posicao >= 1 || posicao <= 3)
      {
        plano[0][posicao-1] = '@';
      }
      else if (posicao >= 4 || posicao <= 6)
      {
        plano[1][posicao-4] = '@';
      }
      else
      {
        plano[2][posicao-7] = '@';
      } 
      jogar = 0;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%c\t", plano[i][j]);
    printf("\n");

  }
  return 0;
}