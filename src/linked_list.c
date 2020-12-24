#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
}node_t;

void print_list(node_t *head)
{
    node_t *temp = head;
    while(temp->next != NULL)
    {
        printf("%d -> ",temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

node_t* create_node(int val)
{
    node_t *newnode = (node_t*)malloc(sizeof(node_t));
    newnode->val = val;
    newnode->next = NULL;
    return newnode;
}
void insert_at_begin(node_t **head, int val)
{
    node_t *tmp = create_node(val);
    tmp->next = *head;
    *head = tmp;
}
void insert_at_end(node_t **head, int val)
{   
    node_t *tmp = create_node(val);
    node_t *temp = *head;
    while(temp->next != NULL)
    {
       temp = temp->next;
    }
    temp->next = tmp;
}
void delete_linkedlist(node_t *head)
{
    node_t *temp = head;
    while(temp->next != NULL)
    {
        
    }
}
void insert_at(node_t **head, int index, int val)
{
    node_t *temp = *head;
    for(int i = 1;i<index - 1 ;i++)
    {
        temp = temp->next;
    }
    node_t *tmp = create_node(val);
    tmp->next = temp->next;
    temp->next = tmp;
    
}
int main() {
    printf("Hello, world!\n");
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
  