#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;

}Node;

Node* insert_data_beg(int x,Node *start)
{
  Node *temp = malloc(sizeof(Node));
  temp->data = x;
  temp->link = start;
  start = temp;

  return start;
}

Node* insert_data_end(int x,Node *start)
{
    /* Traverse to the last list */
    Node *temp = start;
    Node *q = malloc(sizeof(Node));

    while( temp->link != NULL)
    {
        temp = temp->link;
    }
    q->data = x;
    q->link = temp->link;
    temp->link = q;

    return start;
}


void display(Node *ptr)
{
    Node *temp = ptr;
    printf("List - > ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{

    Node *start= NULL;
    start = insert_data_beg(7,start);
    start = insert_data_beg(4,start);    
    display(start);
    start = insert_data_end(10,start);
    display(start);
    start = insert_data_beg(41,start);
    display(start);

    return 0;
}
