#ifndef DYNAMIC_QUEUE_H
#define DYNAMIC_QUEUE_H

#include <stdio.h>
#define TYPE int


struct node
{
    int item;
    struct node *next;
};


int isEmpty();
struct node* initNode();
int enqueue(TYPE element);
TYPE dequeue();
void display();

#endif