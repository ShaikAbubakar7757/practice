#include <stdio.h>
#include "my_header.h"
/*Adding some comments*/
/*Adding something for rebasing*/
/*Something which is not imp..I am trying to stash*/
int
main (int argc, char *argv[])
{
    //printf("I am awake...\n");
    int a[] = {-222, 22, 3, 3,-1, 4};
    int N  = sizeof(a)/sizeof(int);
    //printf("Array before sorting \n");
    //print_array(a, &N);
    /*sorting*/
    int *b = selection_sort(a , N);
    //printf("Array after sorting \n");
    //print_array(b, &N);
    
    int a1[] = {454,44,5565,33,455,33434,444,55,444};
    N = sizeof(a)/sizeof(int);
    //printf("Array before sorting \n");
    //print_array(a1, &N);
    //bubble_sort(a1, &N);
    //printf("Array after sorting \n");
    //print_array(a1, &N);
    node_t *head;
    insert_at_begin(&head, 400);
    insert_at_begin(&head, 500);
    insert_after_node(&head, 2);
    find_node_by_val(&head,10);
    //insert_at(&head, 15, 20);
    //print_list(head);
   // insert_at_end(&head, 600);
    //print_list(head);
    //insert_at(&head, 2, 346);
    //print_list(head);
    //insert_at(&head, 4, 4364);
   // insert_at(&head, 5, 53454);
    printf("Before the linked list reversal:\n");
    print_list(head);
    reverse_linked_list(&head);
    printf("After the reverse of the inked list:\n");
    print_list(head);
    delete_linkedlist(head);
    return 0;
}
