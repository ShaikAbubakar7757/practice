#include <stdio.h>
#include "myheader.h"
int
main (int argc, char *argv[])
{
    printf("I am awake...\n");
    int a[] = {-222, 22, 3, 3,-1, 4};
    int N  = sizeof(a)/sizeof(int);
    printf("Array before sorting \n");
    print_array(a, &N);
    /*sorting*/
    int *b = selection_sort(a , N);
    printf("Array after sorting \n");
    print_array(b, &N);
    
    int a1[] = {454,44,5565,33,455,33434,444,55,444};
    N = sizeof(a)/sizeof(int);
    printf("Array before sorting \n");
    print_array(a1, &N);
    bubble_sort(a1, &N);
    printf("Array after sorting \n");
    print_array(a1, &N);
    return 0;
}
