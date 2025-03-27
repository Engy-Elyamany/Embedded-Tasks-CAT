#include "staticQueue.h"

TYPE q[MAXSIZE];
int front = -1, rear = -1, length = 0;

int isEmpty()
{
    return length == 0 ;
}

int isFull()
{
    return length == MAXSIZE;
}

int enqueue(TYPE val)
{
    if (isFull()){
        printf("Full Queue! Can't enqueue\n");
        return 0 ;
}
    else
    {
        if (isEmpty())
            front = rear = 0;
        else
        {
            rear = (rear + 1) % MAXSIZE;
        }
        q[rear] = val;
        length++;
        return 1;
    }
}

int dequeue()
{
    if (isEmpty())
    {
        printf("Empty Queue! Can't delete\n");
        return 0;
    }

    else
    {
        int n = q[front];

        //Ther's only one element in the queue
        if (front == rear)
            front = rear = -1;
        else
        {
            front = (front + 1) % MAXSIZE;
        }
        length--;
        printf("the deleted element = %d\n", n);
        return 1;
    }
   
}

void peek(){
     if (isEmpty())
    {
        printf("Empty Queue!\n");
    }
    else{
        printf("The first element = %d\n",q[front]);
    }
    
}

void display(){
    if(isEmpty())
    printf("Empty Queue!!\n");
    else{
        for (int i = front; i <= rear; i++)
        {
            printf("%d ",q[i]);
        }
        printf("\n");
        
    }
}
