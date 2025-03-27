#include "dynamicQueue.h"
#include <stdlib.h>

int length = 0;

struct node *front = NULL;
struct node *rear = NULL;

int isEmpty()
{
    return (front == NULL );
}


struct node* initNode(){
    struct node *newItem;
    newItem = (struct node *)malloc(sizeof(struct node));
    if (newItem == NULL)
    {
        printf("Allocation failed in Enqueue\n");
        return NULL;
    }
    return newItem;
}
int enqueue(TYPE element)
{
    struct node* newItem = initNode();
   if(newItem == NULL){
    printf("Can't Enqueue!!\n");
    return 0;
   }
    else
    {

        length++;
        // construct the new node
        newItem->item = element;
        newItem->next = NULL;

        // link the new node to the rest of the queue
        if (isEmpty())
        {
            front = rear = newItem;
        }else{
             rear->next = newItem;
        rear = newItem;
        }
       return 1;
    }
}

TYPE dequeue()
{
    if (isEmpty())
    {
        printf("Empty Queue! Can't delete\n");
        return -1;
    }
    else
    {
         struct node *temp = front;
         TYPE del = temp->item;
        if (length == 1)
        {
            front = rear = NULL;
        }
        else
        {
            front = front->next;
        }
        temp->next = NULL;
        free(temp);
        length--;
        return del;
    }
}

void display(){ 
    
    if(isEmpty())
    printf("Empty Queue!!\n");
    else{
    struct node *cur = front;
    while (cur != NULL)
    {
        printf("%d ", cur->item);
        cur = cur->next;
    }
    printf("\n");
}
}
