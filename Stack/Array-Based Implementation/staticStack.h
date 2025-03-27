#ifndef STATIC_STACK_H
#define STATIC_STACK_H

#define MAXSIZE 100
#define TYPE int
#include <stdio.h>

int isEmpty();
int isFull();
int push(TYPE element);
TYPE pop();
TYPE peek();
void display();

#endif