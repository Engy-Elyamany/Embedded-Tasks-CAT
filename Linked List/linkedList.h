#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define TYPE int
#include <stdio.h>
#include <stdlib.h>

struct node {
    TYPE element;
    struct node * next;
};

//struct node * head ;

int isEmpty(struct node *head);
struct node * Append(struct node * head, TYPE val);
int length(struct node * head);
int getElement(struct node *head, int n , TYPE * returnVal);
struct node * deleteFirst(struct node * head);
int deleteNode(struct node * head, int n);
struct node * insertFirst(struct node * head , TYPE val);
struct node * insertAfter(struct node * head,int n, TYPE val);
void display(struct node * head);

#endif