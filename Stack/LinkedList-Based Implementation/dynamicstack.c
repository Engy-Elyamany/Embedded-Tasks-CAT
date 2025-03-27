#include "dynamicStack.h"
#include <stdlib.h>

//initialize top pointer to null 
struct node *top = NULL;

struct node *newItem;

int isEmpty()
{
    // true if the pointer doesn't point to any node 
    return (top == NULL);
}

void push(TYPE element)
{
    /*
    -  if newItem has not been initialized to any memory location, it will produce a segmentation fault
    -  malloc fun returns a void pointer that can take the type of any pointer type
    -  here , we allocate memory location of size (struct node)
        we cast the return of the malloc fun to a (struct node *) type
    */
    newItem = (struct node *) malloc (sizeof(struct node));
    if(newItem == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    else
    {
        newItem->value = element;
        newItem->next = top;
        top = newItem;
    }
    
}

TYPE pop()
{
    if (isEmpty())
    {
        printf("Stack is empty, Nothing to delete from the stack\n");
    }
    else
    {
        //both temp and top ptr points to the top node in the stack
        struct node *temp = top;

        //move the top ptr to the next node in the list
        top = top->next;

        //store the value of the last element (element to be deleted) in a variable to return it later 
        int n = temp->value;

        //disconnect the temp ptr (element to be deleted) from the rest of the stack
        temp->next = NULL;

        //deallocate temp from memory 
        free(temp);

        return n;
    }
}
TYPE peek()
{
    if (isEmpty())
    {
        printf("Stack is empty, Nothing to show\n");
    }
    else
    {
        return top->value;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty, Nothing to show\n");
    }
    else
    {
        //both iter and top ptr points to the top node in the stack
        struct node *iter = top;

        while (iter != NULL)
        {
            printf("%d ", iter->value);
            iter = iter->next;
        }
        printf("\n");
    }
}
