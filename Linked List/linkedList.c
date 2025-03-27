#include "linkedList.h"

int isEmpty(struct node *head){
    return head == NULL;
}
struct node * Append(struct node *head, TYPE val)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Allocation Failed! \n");
        return NULL;
    }
    else
    {
        newNode->element = val;
        newNode->next = NULL;
        if (!isEmpty(head)) // list is not empty
        {
            struct node *temp = head;
            while(temp->next != NULL) //while temp is not at the last node in the list
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
        else{
            head = newNode;
        }

        return head;
    }
}


int length(struct node * head){
    int length = 0;
    struct node* temp = head;

    while (temp!= NULL)
    {
        temp =temp->next;
        length++;
    }
    return length;
}

int getElement(struct node *head, int n , TYPE * returnVal){
    // Get element of number n in the list and return it in the ptr returnVal
    if(isEmpty(head)){
        printf("Empty list, Can't fetch the element\n");
        return 0;
    }
    else if((n<1) || (n > length(head))){
        return -1;
    }
    else 
    {
        struct node * temp =head;
        int x = 1;
        while (x < n ){
            temp  = temp->next;
            x++;
        }

        *returnVal = temp->element;
        return 1;
    }
    
}

struct node * deleteFirst(struct node * head){
    if(isEmpty(head)){
        printf("Empty List! Can't delete\n");
        return NULL;
    }
    else{
        struct node * temp =head;
        head = head->next;
        free(temp);
        return head;
    }
}

int deleteNode(struct node *head, int n){
    if(isEmpty(head)){
        printf("Empty list, Can't delete\n");
        return 0;
    }
    else if((n<1) || (n > length(head))){
        return -1;
    }
    else 
    {
        struct node * prev = head;
        struct node * cur;
        int x = 1;
        if(x < n-1 ){
            prev  = prev->next; //stops right before the desired node
            x++;
        }
        cur = prev->next;
        prev->next = cur->next;
        free(cur);
        return 1;
    }
}
struct node * insertFirst(struct node * head , TYPE val){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Allocation Failed! \n");
        return NULL;
    }
    else
    {
            newNode->element = val;
            if(isEmpty(head)){ // insert the very first node
                newNode->next = NULL;
                head = newNode;
            }
            else{
                newNode->next = head;
                head = newNode;
            }
            return head;
    }

}
struct node * insertAfter(struct node * head,int n, TYPE val){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Allocation Failed! \n");
        return NULL;
    }
    else if((n<1) || (n > length(head))){
        printf("Error! out of Range\n");
        return head;
    }
    else if( n == 1 ){ // insert the very first node
       return insertFirst(head ,val);
     }
    else
    { 
        newNode ->element = val;
        struct node * prev = head;
        struct node * cur = head;
        int x = 1;
        while (x < n-1)
        {
            prev = prev->next;
            x++;
        }
        cur = prev->next;
        prev ->next = newNode;
        newNode ->next = cur;
        return head;
            
    }
}
void display(struct node * head){
    struct node * cur = head;
    while (cur != NULL)
    {
        printf("%d ", cur->element);
        cur = cur ->next;
    }
    printf("\n");
}

