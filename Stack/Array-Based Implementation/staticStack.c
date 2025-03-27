#include "staticStack.h"

int top = -1;
TYPE stack[MAXSIZE];

int isEmpty()
{
    return (top == -1);
}
int isFull()
{
    return (top == MAXSIZE - 1);
}

int push(TYPE element)
{
    if (isFull()){
        printf("Stack is full! Can't add a new element\n");
        return 0;
    }
    else
    {
        top++;
        stack[top] = element;
        return 1;
    }
}

TYPE pop()
{
    if (isEmpty())
    {
        printf("Stack is empty, Nothing to delete\n");
        return -1;
    }

    else
    {
        TYPE n = stack[top];
        --top;
        return n;
    }
}
TYPE peek()
{
    if (isEmpty())
    {
        printf("No elements in the stack to show\n");
        return -1;
    }

    else
    {
        return stack[top];
    }
}

void display()
{
    if (isEmpty())
        printf("Empty stack\n");
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
