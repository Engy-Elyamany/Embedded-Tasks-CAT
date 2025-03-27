#ifndef STATIC_STACK_H
#define STATIC_STACK_H

#define MAXSIZE 100
#define TYPE int
#include <stdio.h>

struct node
{
    int value;
    struct node *next;
};

int isEmpty();
void push(TYPE element);
TYPE pop();
TYPE peek();
void display();

#endif