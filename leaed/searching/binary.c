#include <stdio.h>

int buscab (int vetor[]);

int buscab(int vetor[]) {
    int tam = sizeof(*vetor)/sizeof(vetor[0]);
    int x = 80;
    int min = 0;
    while (tam != min)
    {
        int procura = (min - (min - tam))/2;

        if (vetor[procura] == x)
        {
            
        }
        
    }

    return 0;    

}

int main(int argc, char const *argv[])
{
    int vetor [] = {10,20,30,40,50,60,70,80,90};
    /* code */
    return 0;
}
