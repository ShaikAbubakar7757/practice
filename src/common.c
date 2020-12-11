#include <stdio.h>
#include "myheader.h"

void print_array(int *a, int *N)
{
     for(int i = 0 ; i<=((*N)-1) ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
