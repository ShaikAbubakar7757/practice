/**
* Designed by Shaik Abubakar
* for any queries please ping me abubakarshaik8341@gmail.com
*/
#include <stdio.h>

/*swaping*/
void swap(int *a, int *b);

/*sorting*/
int* selection_sort(int a[], int N);

/*printing*/
void print_array(int *a, int *N);

int main() {
    int a[] = {-222, 22, 3, 3,-1, 4};
    int N  = sizeof(a)/sizeof(int);
    printf("Array before sorting \n");
    print_array(a, &N);
    /*sorting*/
    int *b = selection_sort(a , N);
    printf("Array after sorting \n");
    print_array(b, &N);
   
    return 0;
}
  
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
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
void print_array(int *a, int *N)
{
     for(int i = 0 ; i<=((*N)-1) ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return;
}
