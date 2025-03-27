#include "search.h"

void main()
{
    int arr[] = {2, 5, 8, 11, 14, 17, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("key : ");
    scanf("%d", &key);

    printf("------------------- Linear Serach -------------------\n");
    int res = linear_search(arr, n, key);
    if (res == -1)
        printf("The element %d is not found in the array\n", key);
    else{
        printf("The element %d is found at the index %d\n", arr[res], res);
        printf("Number of comparisons %d\n\n", res+1);
    }


    printf("------------------- Binary Serach -------------------\n");
    int i ;
    int res1 = binary_search(arr,0,n-1,key,&i);
    if (res1 == -1)
        printf("The element %d is not found in the array\n", key);
    else{
        printf("The element %d is found at the index %d\n", arr[res1], res1);
        printf("Number of comparisons %d\n",i);
    }
}