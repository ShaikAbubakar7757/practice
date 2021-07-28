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
    printf("%d -> ", temp->val);
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
    node_t *prev = NULL;
    while(temp->next != NULL)
    {
	prev = temp;
    	temp = temp->next;
	printf("Freed %d \n",prev->val);
    	free(prev);	
    }
    printf("Freed %d \n", temp->val);
    free(temp);
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

void insert_after_node(node_t **before_node, int val)
{
	node_t *tmp = *before_node;
	node_t *newnode = create_node(val);
	newnode->next = tmp->next;
	tmp->next = newnode;
	return;
}

void find_node_by_val(node_t **node, int val)
{
	node_t *head = *node;
	while(head->next != NULL)
	{
		if(head->val == val)
		{
			printf("The value %d is found !\n", val);
		}
		head = head->next;
	}
	return;
}

	
	
	

void reverse_linked_list(node_t **head)
{
	
	node_t *prev = NULL;
	node_t *current = *head;
	node_t *next = NULL;
	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return;
}
  
