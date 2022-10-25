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


};

Vacas* cadastrarVacas();

void mostrarVacas(const Vacas*);

int menuzinho(void);

int main(int argc, char const *argv[])
{
    
    return 0;
}
