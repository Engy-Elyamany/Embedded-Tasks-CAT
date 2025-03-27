#ifndef STATIC_QUEUE_H
#define STATIC_QUEUE_H

#define MAXSIZE 100
#define TYPE int
#include <stdio.h>
int isEmpty();
int isFull();
int enqueue(TYPE val);
int dequeue();
void peek();
void display();

#endif