
#ifndef MY_HDR_H
#define MY_HDR_H
/*swaping*/
void swap(int *a, int *b);

/*sorting*/
int* selection_sort(int a[], int N);

/*printing*/
void print_array(int *a, int *N);

int* bubble_sort(int a[], int *N);

typedef struct node
{
    int val;
    struct node *next;
}node_t;




node_t* create_node(int val);

void insert_at_begin(node_t **head, int val);

void insert_at_end(node_t **head, int val);

void delete_linkedlist(node_t *head);

void insert_at(node_t **head, int index, int val);

#endif 
