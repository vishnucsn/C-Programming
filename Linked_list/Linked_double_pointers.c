#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Linked_double_pointers
{
    int data;
    struct Linked_double_pointers *link;

}LLNode;


void insert_data_beg(LLNode **pStart, int data)
{

    LLNode *temp = malloc(sizeof(LLNode));
    temp->data = data;
    temp->link = *pStart;
    *pStart = temp;
}

void display(LLNode *start)
{
    printf("List -> ");
    while(start != NULL)
    {
        printf("%d ",start->data);
        start = start->link;
    }
    printf("\n");
}

void insert_data_end(LLNode **pstart, int data)
{
    LLNode *temp_start = *pstart;
    while(temp_start->link != NULL)
    {
        temp_start = temp_start->link;
    }
    LLNode *temp = malloc(sizeof(LLNode));
    temp->data = data;
    temp->link = temp_start->link;
    temp_start->link = temp;
}

int main()
{
    LLNode *start = NULL; 
    insert_data_beg(&start,3);
    display(start);
    insert_data_beg(&start,4);
    display(start);
    insert_data_beg(&start,6);
    display(start);
    insert_data_end(&start,8);
    display(start);
    return 0;
}