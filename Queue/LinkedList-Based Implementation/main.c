#include "dynamicQueue.h"

int main()
{
    enqueue(5);
    enqueue(15);
    enqueue(25);
    enqueue(35);
    display();

    dequeue();
    display();

    
    dequeue();
    dequeue();
    dequeue();
    display();

    
    return 0;
}
