#include <stdio.h>
int buscab (int vetor[], int);

int buscab (int vetor[], int);

int buscab(int vetor[], int tam) {
int buscab(int vetor[], int tam) {
    int x = 80;
    int min = 0;
    while (tam != min)
    {
        int procura = min + (min - tam)/2;

        if (vetor[procura] == x)
        {
            return procura;   
        }
        else if (vetor[procura] > x)
        {
            min = procura + 1;
        }
        else {
            min = procura + 1;
            return 1;   
        }
        else if (vetor[procura] > x)
        {
            min = procura + 1;
        }
        else {
            min = procura + 1;
            tam = procura - 1;tam = procura - 1;
        }
    }

    return 0;    

}

int main(int argc, char const *argv[])
{
    int vetor [1010] = {10,20,30,40,50,60,70,80,90,100,100};
    /* code */
    int tam = (sizeof(vetor)/sizeof(vetor[0]));
    int result = buscab(vetor,tam);
    printf("%d\n", result);
    int tam = (sizeof(vetor)/sizeof(vetor[0]));
    int result = buscab(vetor,tam);
    printf("%d", result);
    return 0;
}
