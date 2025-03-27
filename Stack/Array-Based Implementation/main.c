#include "staticStack.h"

int main()
{
    pop();
    peek();

    push(5);
    push(10);
    push(15);
    push(20);
    display();

    printf("The deleted element is %d \n", pop());
    printf("The last element is %d \n", peek());
    display();

    return 0;
}