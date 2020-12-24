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
    while(temp != NULL)
    {
        printf("%d -> ",temp->val);
        temp = temp->next;
    }
    printf("\n");
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
int main() {
    printf("Hello, world!\n");
    node_t *head = NULL;
    insert_at_begin(&head, 200);
    insert_at_begin(&head, 300);
    insert_at_begin(&head, 400);
    insert_at_begin(&head, 500);
    print_list(head);
    return 0;
}
  