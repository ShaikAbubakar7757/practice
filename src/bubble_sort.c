
/**
* Designed by Shaik Abubakar
* for any queries please ping me abubakarshaik8341@gmail.com
*/

#include <stdio.h>
#include "my_header.h"


int* bubble_sort(int a[], int *N)
{
    for(int i = 0; i <= *N-1; i++)
    {
        for(int j = 0 ; j < *N-i-1 ;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(&a[j], &a[j+1]);
            }
        }
    }
    return a;
}

