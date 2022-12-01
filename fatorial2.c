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
    if (n == 0)
        return 1;
    else
        return n * fat(n - 1);
}

//by@flaviusgoeognio