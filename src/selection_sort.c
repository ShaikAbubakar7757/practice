/**
* Designed by Shaik Abubakar
* for any queries please ping me abubakarshaik8341@gmail.com
*/
#include <stdio.h>
#include "my_header.h"


int* selection_sort(int a[], int N)
{
    for(int i = 0; i < N-1;i++)
    {
       
        for(int j = i ; j < N -1 ; j++)
        {
            if(a[j] < a[i])
            {
                
                swap(&a[i],&a[j]);
                
            }
            
        }
        
        
    }
    return a;
}

