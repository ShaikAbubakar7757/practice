#include <stdio.h>
#include "my_header.h"
/*Adding some comments*/
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

    node_t *head = NULL;
    insert_at_begin(&head, 200);
    insert_at_begin(&head, 300);
    insert_at_begin(&head, 400);
    insert_at_begin(&head, 500);
   
    print_list(head);
    insert_at_end(&head, 600);
    print_list(head);
    insert_at(&head, 2, 346);
    print_list(head);
    insert_at(&head, 4, 4364);
    insert_at(&head, 5, 53454);
    print_list(head);
    return 0;
}
