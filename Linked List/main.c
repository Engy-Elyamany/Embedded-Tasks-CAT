#include "linkedList.h"

void main(){
    struct node * ptr_head = NULL;
    TYPE val;
    TYPE * ele = &val;
    ptr_head = Append(ptr_head , 5);
    Append(ptr_head , 15);
    Append(ptr_head , 25);
    Append(ptr_head , 35);
    Append(ptr_head , 45);
    Append(ptr_head , 55);
    display(ptr_head);    //5 15 25 35 45 55
    printf("-----------------------------------------\n");

    ptr_head = deleteFirst(ptr_head);  //15 25 35 45 55
    display(ptr_head);
    deleteNode(ptr_head, 3);           // 15 25 45 55
    display(ptr_head);
    printf("-----------------------------------------\n");

    getElement(ptr_head,3,ele);
    printf("The element at node 3 is %d \n", *ele);  // 45
    printf("-----------------------------------------\n");

    ptr_head = insertFirst(ptr_head , 70);
    display(ptr_head);  //70 15 25 45 55
    ptr_head = insertAfter(ptr_head, 2 , 90);
    display(ptr_head);  //70 90 15 25 45 55
    printf("-----------------------------------------\n");

}