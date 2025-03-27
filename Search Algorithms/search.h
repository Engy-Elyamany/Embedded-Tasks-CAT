#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>

int linear_search(int arr[],int n, int key);
int binary_search(int arr[], int l, int r, int key, int * iter);
#endif