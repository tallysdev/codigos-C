#include <stdio.h>
int fat(int);
int main(void)
{
    int num, f;
    printf("Programa Fatorial\n");
    printf("Informe valor: ");
    scanf("%d", &num);
    f = fat(num);
    printf("%d! = %d\n", num, f);
    printf("\nFim do Programa!\n");
    return 0;
}
int fat(int n)
{
    int f = 1;
    for (int i = n; i > 0; i--)
    {
        f = f * i;
    }
    return f;
}

// by@flaviusgoeognio