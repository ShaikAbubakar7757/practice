
/**
* Designed by Shaik Abubakar
* for any queries please ping me abubakarshaik8341@gmail.com
*/

#include <stdio.h>
void print_array(int *a, int *N);
void swap(int *a, int *b);
int* bubble_sort(int a[], int *N);
int main() {
    int a[] = {454,44,5565,33,455,33434,444,55,444};
    int N = sizeof(a)/sizeof(int);
    printf("Array before sorting \n");
    print_array(a, &N);
    bubble_sort(a, &N);
    printf("Array after sorting \n");
    print_array(a, &N);
    return 0;
}

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