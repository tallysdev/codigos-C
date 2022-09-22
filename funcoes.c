#include <stdio.h>


int fat(int n)
{
 int i, f;

 f = 1;
 for (i = 1; i <= n; i++)
 f *= i;
 return f;
}

int arr(int n, int k)
{
 return (fat(n) / fat(n - k));
}

int comb(int n, int k)
{
 return (fat(n) / ((fat(k) * fat(n - k))));
}