#include "../sorting.h"

void merge(int arr[], int l, int m, int r)
{

    // Determine the range of each subarray
    int n1 = m - l + 1;
    int n2 = r - m;
    int leftArr[n1], rightArr[n2];

    // divide the arr into to arrays : LeftArr has 60 30 50 (m = 2)
    // rightArr has 10 20
    for (int i = 0; i < n1; i++)
    {
        leftArr[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        rightArr[i] = arr[m + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = l;

    // We can go out of this loop in 3 cases :
    //  1. if i is bigger than n1 and j is bigger than n2
    // 2. if i only is bigger than n1
    // 3.if j only is bigger than n2
    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
        {
            arr[k] = leftArr[i];
            i++;
        }
        else
        {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Handle the case in which i is still smaller than n1 but j is bigger than n2
    while (i < n1)
    {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Handle the case in which j is still smaller than n2 but i is bigger than n1
    while (j < n2)
    {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Divide & Conquer
void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        // sort the left array
        merge_sort(arr, l, m);

        // sort the right array
        merge_sort(arr, m + 1, r);

        // merge the two
        merge(arr, l, m, r);
    }
}
