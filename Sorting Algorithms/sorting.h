#ifndef SORT_H
#define SORT_H
#include <stdio.h>

static void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

static void print_sorted(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void print_sorted(int arr[], int n);
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void merge_sort(int arr[], int l, int r);
void quick_sort(int arr[], int l, int r);
void heap_sort(int arr[], int n);

#endif