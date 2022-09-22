#include <stdio.h>

int busca (int arr[], int, int);

int main(void) {

 int arr[] = {0,1,2,3,4,5,6,7,8,9};    
 int tam = sizeof(arr)/sizeof(arr[0]);
 int num = 7;
 int result = busca(arr, num, tam);
 printf("%d", result);
 return 0;
}

int busca(int arr[], int num, int tam) {
    
    for (int i = 0; i < tam; i++)
    {
        if (arr[i] == num)
        {
            return 1;
        }
    
    }

     return 0;
 }