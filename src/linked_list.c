#include <stdio.h>
#include <stdlib.h>
#include "my_header.h"


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

  
