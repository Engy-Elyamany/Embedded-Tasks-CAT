#include "../sorting.h"

//           30                       60                        70
// elements less than pivot          pivot            elements greater than pivot
int partition(int arr[], int begin, int end)
{
    int i = begin;
    int j = end;
    int pivotPos = i;

    while (1)
    {
        // true if the elements on the right of pivot is greater than pivot (in its correct position) 60 70 90
        // move j indicator to test the precedor element(arr[j-1])
        while (arr[pivotPos] <= arr[j] && pivotPos != j)
        {
            j--;
        }

        // true when all elements to the right of pivot is greater than its value (Right Sorting Done)
        // here j has been moving untill it reached pivotPos
        if (pivotPos == j)
            break;

        else if (arr[pivotPos] > arr[j])
        {
            swap(&arr[pivotPos], &arr[j]);
            pivotPos = j;
        }
        //----------------------------------------------------------------------------------------------------

        // true if the elements on the left of pivot is smaller than pivot (in its correct position) 20 30 60
        // move i indicator to test the succesor element(arr[i+1])
        while (arr[pivotPos] >= arr[i] && pivotPos != i)
        {
            i++;
        }

        // true when all elements to the left of pivot is smaller than its value (left Sorting Done)
        if (pivotPos == i)
            break;
        else if (arr[pivotPos] < arr[i])
        {
            swap(&arr[pivotPos], &arr[i]);
            pivotPos = i;
        }
        return pivotPos;
    }
}

void quick_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int piv = partition(arr, l, r);
        quick_sort(arr, l, piv - 1);
        quick_sort(arr, piv + 1, r);
    }
}