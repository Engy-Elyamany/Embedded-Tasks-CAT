git#include "sorting.h"

void main()
{
    int arr1[] = {60, 30, 50, 10, 20};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Arr1 : \n");
    print_sorted(arr1, n1);

    bubble_sort(arr1, n1);
    printf("Bubble Sort : \n");
    print_sorted(arr1, n1);

    printf("--------------------------------------------------------\n");

    int arr2[] = {7, 20, 15,36, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Arr2 : \n");
    print_sorted(arr2, n2);

    selection_sort(arr2, n2);
    printf("Selection Sort : \n");
    print_sorted(arr2, n2);

    printf("--------------------------------------------------------\n");

    int arr3[] = {100, 500, 300, 200, 90};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Arr3 : \n");
    print_sorted(arr3, n3);

    insertion_sort(arr3, n3);
    printf("Insertion Sort : \n");
    print_sorted(arr3, n3);

    printf("--------------------------------------------------------\n");

    int arr4[] = {120, 5, -7, 0, 11};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Arr4 : \n");
    print_sorted(arr4, n4);

    merge_sort(arr4, 0, n4 - 1);
    printf("Merge Sort : \n");
    print_sorted(arr4, n4);

    printf("--------------------------------------------------------\n");
    int arr5[] = {98, 56, 44, 13, -8};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    printf("Arr5 : \n");
    print_sorted(arr5, n5);

    quick_sort(arr5, 0, n5 - 1);
    printf("Quick Sort : \n");
    print_sorted(arr5, n5);
}