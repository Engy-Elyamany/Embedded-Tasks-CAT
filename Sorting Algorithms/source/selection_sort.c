#include "../sorting.h"

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minPos = i;
        int min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                minPos = j;
                min = arr[j];
            }
        }

        swap(&arr[minPos], &arr[i]);
    }
}